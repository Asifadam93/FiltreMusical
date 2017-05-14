#include <iostream>
#include <iomanip>
#include "api/lowlevel/inc/fmod_errors.h"
#include "api/lowlevel/inc/fmod.hpp"


using namespace std;


/**
 * Fonction permettant de savoir si l'emplacement du fichier qu'on nous transmet est correspond à un fichier ou pas
 * @param name
 * @return
 */
bool checkFileLocation (const string& name) {
    if (FILE *file = fopen(name.c_str(), "r")) {
        fclose(file);
        return true;
    } else {
        return false;
    }
}

int main()
{
    FMOD::System        *system;
    FMOD::Sound         *sound;
    FMOD::Channel       *channel = 0;
    FMOD::ChannelGroup  *masterGroup;
    FMOD::DSP           *dspLowPass = 0;
    FMOD_RESULT         result;

    unsigned int    soundLength;
    unsigned int    soundLengthMinutes;
    unsigned int    soundLengthSeconds;

    unsigned int    soundInProgressLength;
    unsigned int    soundInProgressMinutes;
    unsigned int    soundInProgressSeconds;

    unsigned int    lastEffectPlay = 0;

    void            *extradriverdata = 0;
    bool            playing = false;
    bool            dontPlayEffect = true;

    string          soundFile;

    //Création du FMOD::System
    result = FMOD::System_Create(&system);
    if (result != FMOD_OK)  {
        printf("FMOD error! (%d) %s\n", result, FMOD_ErrorString(result));
        exit(-1);
    }

    //Initialisation du system
    result = system->init(32, FMOD_INIT_NORMAL, extradriverdata);
    if (result != FMOD_OK)  {
        printf("FMOD error! (%d) %s\n", result, FMOD_ErrorString(result));
        exit(-1);
    }

    //récupération du masterChannelGroup (sauf erreur qui contient tout les channels lus //TODO creuser ce point)
    result = system->getMasterChannelGroup(&masterGroup);
    if (result != FMOD_OK)  {
        printf("FMOD error! (%d) %s\n", result, FMOD_ErrorString(result));
        exit(-1);
    }

    //récupération de l'emplacement du fichier à lire
    do {
        cout << "Veuillez choisir l'emplacement du fichier à lire (attentions les espaces peuvent causent problèmes pour le moment)" << endl << "> ";
        cin >> soundFile;
    } while(!checkFileLocation(soundFile));

    //création d'un son à partir de l'emplacement du fichier précédent
    result = system->createSound(soundFile.c_str(), FMOD_DEFAULT, 0, &sound);
    if (result != FMOD_OK)  {
        printf("FMOD error! (%d) %s\n", result, FMOD_ErrorString(result));
        exit(-1);
    }

    //lecture du son
    result = system->playSound(sound, 0, false, &channel);

    //récupération de la durée du son
    sound->getLength(&soundLength, FMOD_TIMEUNIT_MS);

    //conversion du temps en minutes (partie entière) et secondes (le reste) de la durée de la musique
    soundLengthMinutes = (int) (soundLength/1000)/60;
    soundLengthSeconds = (int) (soundLength/1000)%60;





    //création d'un filtre
    result = system->createDSPByType(FMOD_DSP_TYPE_HIGHPASS, &dspLowPass);
    if (result != FMOD_OK)  {
        printf("FMOD error! (%d) %s\n", result, FMOD_ErrorString(result));
        exit(-1);
    }

    //ajout du filtre au masterGroup
    result = masterGroup->addDSP(0, dspLowPass);
    if (result != FMOD_OK)  {
        printf("FMOD error! (%d) %s\n", result, FMOD_ErrorString(result));
        exit(-1);
    }

    //activation du filtre
    result = dspLowPass->setBypass(true);
    if (result != FMOD_OK)  {
        printf("FMOD error! (%d) %s\n", result, FMOD_ErrorString(result));
        exit(-1);
    }


    while(channel)
    {

        //on vérifier si le son est en train d'être lu ou non
        result = channel->isPlaying(&playing);
        if (result != FMOD_OK)  {
           printf("FMOD error! (%d) %s\n", result, FMOD_ErrorString(result));
           exit(-1);
        }

        //récupération de la position de la lecture du son
        result = channel->getPosition(&soundInProgressLength, FMOD_TIMEUNIT_MS);
        if (result != FMOD_OK)  {
           printf("FMOD error! (%d) %s\n", result, FMOD_ErrorString(result));
           exit(-1);
        }

        //conversion de la position de la lecture en minutes (partie entière) et secondes (le reste) de la durée de la musique
        soundInProgressMinutes = (int) (soundInProgressLength/1000)/60;
        soundInProgressSeconds = (int) (soundInProgressLength/1000)%60;

        if (((soundInProgressSeconds % 10) == 0) && (lastEffectPlay != soundInProgressSeconds)){
            dontPlayEffect = !dontPlayEffect;
            lastEffectPlay = soundInProgressSeconds;
        }

        dspLowPass->setBypass(dontPlayEffect);


        //affichage de la lecture en cours
        cout << setfill(' ') << setw(5) << soundInProgressMinutes << ":"
             << setfill('0') << setw(2) << soundInProgressSeconds <<  " | "
             << setfill(' ') << setw(5) << soundLengthMinutes << ":"
             << setfill('0') << setw(2) << soundLengthSeconds
             << setfill(' ') << setw(20) << (dontPlayEffect ? "Filtre désactivé" : "Filtre activé")
             << endl;

        //fin de la boucle si la musique est terminée
        if (playing != 1) {
           break;
        }
    }

    return 0;

}

