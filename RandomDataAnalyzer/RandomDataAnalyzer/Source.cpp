#include <iostream>
using namespace std;
#include <ctime>
int main() {
	srand(time(NULL));
	int num;
	int num2 = 0;
	int sum = 0;
	for (int i = 0; i < 100; i++) {
		
		num = rand() % 1000 + 1;
		cout << num << endl;
		if (num > num2) {
			num2 = num;
		}
		sum = sum + num;
	}
	cout << endl;
	cout << "The biggest number is " << num2<<endl;
	cout << "The Average is " << sum/100 << endl;



}