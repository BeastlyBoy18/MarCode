#include <iostream>
using namespace std;
void ascending(int a,int b,int c);
int main() {
	int a;
	int b;
	int c;
	cout << "Give me the first number" << endl;
	cin >> a;
	cout << "Give me the second number" << endl;
	cin >> b;
	cout << "Give me the third number" << endl;
	cin >> c;
	ascending(a,b,c);
}
void ascending(int a, int b, int c) {
	{
		if ((a > b) && (a > c) && (b > c)) { // CBA
			cout << c<< b<< a;
			cout << endl;
		}
		else if ((b > a) && (b > c) && (a > c)) { // CAB
			cout << c<< a<< b;
			cout << endl;
		}
		else if ((c > a) && (c > b) && (b > a)) { //ABC
			cout << a<< b<< c;
			cout << endl;
		}
		else if ((a > b) && (a > c) && ( c> b)) { //BCA
			cout << b<< c<< a;
			cout << endl;
		}
		else if ((b > a) && (b > c) && (c > a)) { //ACB
			cout << a<< c<< b;
			cout << endl;
		}
		else if ((c > a) && (c > b) && (a > b)) {// BAC
			cout << b<< a<< c;
			cout << endl;
		}
	}
}