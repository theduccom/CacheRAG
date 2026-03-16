#include<iostream>
#include<string>
using namespace std;
int main() {
	int date[5],k,i;
	date[1] = 1;
	date[2] = 0;
	date[3] = 0;
	string b, c,a;
	while (cin >>a) {
		b = a[0];
		c = a[2];
		if (b == "A") {
			k = date[1];
			i = 1;
		}
		if (b == "B") {
			k = date[2];
			i = 2;
		}
		if (b == "C") {
			k = date[3];
			i = 3;
		}
		if (c == "A") {
			date[i] = date[1];
			date[1] = k;
		}
		if (c == "B") {
			date[i] = date[2];
			date[2] = k;
		}
		if (c == "C") {
			date[i] = date[3];
			date[3] = k;
		}
	}
	if (date[1] == 1) {
		cout << "A" << endl;
	}
	if (date[2] == 1) {
		cout << "B" << endl;
	}
	if (date[3] == 1) {
		cout << "C" << endl;
	}
}
