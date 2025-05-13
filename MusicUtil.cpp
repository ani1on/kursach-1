#include "Music.h"
void PlayMusic(const wchar_t* filename) {
	// Открываем и запускаем проигрывание
	wchar_t command[256];
	swprintf(command, 256, L"open \"%s\" type mpegvideo alias mymusic", filename);
	mciSendStringW(command, nullptr, 0, nullptr);
	mciSendStringW(L"play mymusic repeat", nullptr, 0, nullptr); // repeat — по кругу
}

void StopMusic() {
	mciSendStringW(L"stop mymusic", nullptr, 0, nullptr);
	mciSendStringW(L"close mymusic", nullptr, 0, nullptr);
}