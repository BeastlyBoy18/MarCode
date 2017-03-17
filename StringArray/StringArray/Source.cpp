#include <iostream>
#include <string>
using namespace std;

int main() {

	string Clover[4];
	
	for (int i = 0; i < 4; i++) {
		getline(cin, Clover[i]);
	}
		if (Clover[2].compare("Shamrock") == 0)
			cout << Clover[2] << "! A pot of gold for you!" << endl;
		else
			cout << Clover[2] << " Your gold is by another rainbow" << endl;

	
}