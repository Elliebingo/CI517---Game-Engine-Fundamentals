#include "MyAudioSubsystem.h"
#include <iostream>

Mix_Music* music = NULL;

MyAudioSubsystem::MyAudioSubsystem()
{

}
MyAudioSubsystem:: ~MyAudioSubsystem()
{
}
void MyAudioSubsystem::otherfunction()
{
	std::cout << "ELIZABETH_BROOKE-CI517-2023-2024";
	Mix_OpenAudio(22050, MIX_DEFAULT_FORMAT, 2, 4096);
	music = Mix_LoadMUS("assets/audioTest.flac");
	Mix_PlayMusic(music, -1);
}