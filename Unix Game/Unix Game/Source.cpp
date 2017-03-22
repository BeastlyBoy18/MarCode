
#include <iostream>
#include <string>
using namespace std;

int main() {
	string Games[5];
	for (int i = 0; i < 5; i++) {
		getline(cin, Games[i]);
	}
	for (int i = 0; i < 5; i++) {
		if (Games[i].compare("pokemon") == 0)
			cout << Games[i] << " Nice Choice of Game" <<
			endl;
		else
			cout << Games[i] << " Not my Cup of Tea but whatever" << endl;
	}
}

