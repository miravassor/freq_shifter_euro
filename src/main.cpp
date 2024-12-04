//
// Created by mira on 12/4/24.
//

#include "main.h"
#include "daisy_patch_sm.h"
#include "daisysp.h"

// Daisy lib namespaces
using namespace daisy;
using namespace patch_sm;
using namespace daisysp;

// Daisy patch sm object
DaisyPatchSM patch;

// callback for processing audio
// default is very small, 4 samples, 16 Khz
void AudioCallback(AudioHandle::InputBuffer in, AudioHandle::OutputBuffer out, size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        OUT_L[i] = IN_L[i];
        OUT_R[i] = IN_R[i];
    }
}

int main(void) {
    // init patch_sm object, default block size 4 samples, sample rate default 48 Khz
    patch.Init();

    // set sample rate to 96Khz
    patch.SetAudioSampleRate(96000);
    // set block size to 4 samples
    patch.SetAudioBlockSize(4);
    // start audio callback
    patch.StartAudio(AudioCallback);

    while(1) {}
}

