#include "playaudio.h"
//Definition des methodes de la classe Point

PlayAudio::PlayAudio(string songName){

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

        string          soundFile = songName;

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
        /*do {
            cout << "Veuillez choisir l'emplacement du fichier à lire (attentions les espaces peuvent causent problèmes pour le moment)" << endl << "> ";
            cin >> soundFile;
        } while(!checkFileLocation(soundFile));*/

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


}
