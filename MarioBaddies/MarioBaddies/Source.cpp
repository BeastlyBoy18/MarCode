#include <iostream>
using namespace std;
#include <ctime>
void BadGuy();
int main() {

	while (1) {
		BadGuy();
		system("pause");
	}
}
void BadGuy() {
	//-------------------------------------------------------
	int num = rand() % 100 + 1;//generates random #
							   //-------------------------------------------------------
	if (num < 50) {
		cout << "Goomba" << endl;
	
	}
	else if (num > 50 && num < 80) {
		cout << "Shy Guy" << endl;
	}
	//---------------------------------------------------------------------------------------------
	else if (num >= 80 && num <= 100) {
		cout << "Koopa" << endl;
	}

	//---------------------------------------------------------------------------------------------
}