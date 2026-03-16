#include <iostream>
using namespace std;

int main() {
	int a = 0;
	for(int i = 0; i < 3; i++) {
		int b;
		cin >> b;
		a *= 2;
		a += b;
	}
	if(a == 6 || a == 1)
		cout << "Open" << endl;
	else
		cout << "Close" << endl;
}