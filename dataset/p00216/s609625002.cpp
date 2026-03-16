#include<iostream>
using namespace std;

int main() {
	while (1) {
		int s = 1150;
		int a;
		cin >> a;
		if (a==-1)break;
		for (int b = 11; b <= a; b++) {
			if (b < 21)s += 125;
			else if (b < 31)s += 140;
			else s += 160;
		}
		cout << 4280-s<<endl;
	}
}