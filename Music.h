#pragma once
#include <windows.h>
#include <stdio.h>
#include "Music.h"
#pragma comment(lib, "Winmm.lib")
void PlayMusic(const wchar_t* filename);
void StopMusic();