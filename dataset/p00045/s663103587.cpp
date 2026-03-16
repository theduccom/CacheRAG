#include <stdio.h>
#include <iostream>

using namespace std;

int main() {

	int a,b;
	int sum = 0;
	double aver = 0;
	char d;
	double ave;
	int avek;
	double avem;
	double counter = 0;

	while (cin >> a >> d >> b) {
		sum += a * b;
		aver += b;
		counter++;
	}

	avek = aver / counter;
	ave = aver / counter;
	avem = (ave - avek) * 10;

	if (avem >= 5) {
		avek++;
	}

	cout << sum <<endl << avek << endl;

	return 0;
}