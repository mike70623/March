#include <iostream>
#include <windows.h>
using namespace std;
void Jukebox(int x);
int input;
int main() {
	cout << "what song to you want? 1,2 or 3" << endl;
	cin >> input;
	if (input == 1)
		Jukebox(1);
	if (input == 2)
		Jukebox(2);
	if (input == 2)
		Jukebox(3);

}

void Jukebox(int x) {
	int number = input;
	switch (number) {
	case 1:
		PlaySound(TEXT("german-shephard-daniel_simon.wav"), NULL, SND_FILENAME );
		break;
	case 2:
		PlaySound(TEXT("mario_01.wav"), NULL, SND_FILENAME );
		break;
	case 3:
		PlaySound(TEXT("SSBB_Link_Smashed_Distant.wav"), NULL, SND_FILENAME );
		break;
	}
}