#include <Windows.h>
#include <iostream>
using namespace std;

void jukebox(char x);
int main(){
	char music;
	cout << "What song would you like?" << endl;
	cin >> music;
	jukebox(music);
}
void jukebox(char x){

	switch (x) {
	case 'a':
		PlaySound(TEXT("foundit.wav"), NULL, SND_FILENAME);
		break;
	case 'b':
		PlaySound(TEXT("starwars.wav"), NULL, SND_FILENAME);
		break;
	case 'c':
		PlaySound(TEXT("imperial.wav"), NULL, SND_FILENAME);
	}

}