#include <stdio.h>
#include <Windows.h>
#include <mmsystem.h>

int main(void)
{
    // Set the volume to 50% of the maximum volume
    unsigned long volume = 0xFFFFFFFF * 0.2;
    waveOutSetVolume(0, volume);

    while (1)
    {
        printf("Playing sound to remind you to blink...\n");
        PlaySoundW(L"sound.wav", NULL, SND_FILENAME | SND_ASYNC);
        Sleep(5000);
    }

    return 0;
}
