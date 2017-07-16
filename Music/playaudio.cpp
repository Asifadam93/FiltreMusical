#include "playaudio.h"
//Definition des methodes de la classe Point

PlayAudio::PlayAudio(){

        result = FMOD::System_Create(&system);
        if (result != FMOD_OK)  {
            printf("FMOD error! (%d) %s\n", result, FMOD_ErrorString(result));
            exit(-1);
        }

        result = system->init(32, FMOD_INIT_NORMAL, extradriverdata);
        if (result != FMOD_OK)  {
            printf("FMOD error! (%d) %s\n", result, FMOD_ErrorString(result));
            exit(-1);
        }

        result = system->getMasterChannelGroup(&masterGroup);
        if (result != FMOD_OK)  {
            printf("FMOD error! (%d) %s\n", result, FMOD_ErrorString(result));
            exit(-1);
        }




        /*sound->getLength(&soundLength, FMOD_TIMEUNIT_MS);


        soundLengthMinutes = (int) (soundLength/1000)/60;
        soundLengthSeconds = (int) (soundLength/1000)%60;*/

}

void PlayAudio::playSong(const char* songPath){

    result = system->createSound(songPath, FMOD_DEFAULT, 0, &sound);
    if (result != FMOD_OK)  {
        printf("FMOD error! (%d) %s\n", result, FMOD_ErrorString(result));
        exit(-1);
    }

    result = system->playSound(sound, 0, false, &channel);
}

void PlayAudio::stopSong(){
    result = channel->stop();
}


