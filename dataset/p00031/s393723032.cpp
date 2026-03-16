#include<iostream>
using namespace std;
int main() {
	int a;
	while (cin >> a){
		bool b = false;
		if (a % 2 == 1){
			cout << '1';
			b = true;
			a -= 1;
		}
		if (a % 4 == 2){
			if (b == true) 
				cout << ' ';
			else b = true;
			cout << 2;
			a -= 2;
		}
		if (a % 8 == 4) {
			if (b == true) 
				cout << ' ';
			else b = true;
			cout << 4;
			a -= 4;
		}
		if (a % 16 == 8) {
			if (b == true) 
				cout << ' ';
			else b = true;
			cout << 8;
			a -= 8;
		}
		if (a % 32 == 16) {
			if (b == true) 
				cout << ' ';
			else b = true;
			cout << 16;
			a -= 16;
		}
		if (a % 64 == 32) {
			if (b == true) 
				cout << ' ';
			else b = true;
			cout << 32;
			a -= 32;
		}
		if (a % 128 == 64) {
			if (b == true) 
				cout << ' ';
			else b = true;
			cout << 64;
			a -= 64;
		}
		if (a % 256 == 128) {
			if (b == true) 
				cout << ' ';
			else b = true;
			cout << 128;
			a -= 128;
		}
		if (a % 512 == 256) {
			if (b == true) 
				cout << ' ';
			else b = true;
			cout << 256;
			a -= 256;
		}
		if (a % 1024 == 512) {
			if (b == true) 
				cout << ' ';
			else b = true;
			cout << 512;
			a -= 512;
		}
		cout << endl;
	}
}