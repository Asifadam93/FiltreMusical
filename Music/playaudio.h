#ifndef PLAYAUDIO_H
#define PLAYAUDIO_H

#include <iostream>
#include <iomanip>
#include "fmod.hpp"
#include "fmod_errors.h"

using namespace std;

class PlayAudio{

    private:
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

    public:
        PlayAudio();
        void playSong(const char* songPath);
        void stopSong();
        void applyFilter();
        void stopFilter();
};

#endif // PLAYAUDIO_H
