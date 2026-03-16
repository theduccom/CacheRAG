#include<iostream>
using namespace std;

int main() {
	int a=0, b=0, ab=0, o=0;
	int n;
	char d, e;
	while (scanf("%d,%c%c", &n, &d, &e) + 1) {
		if (d == 'A'&&e == 'B') { ab++; }
		else if (d == 'A') { a++; }
		else if (d == 'B') { b++; }
		else if (d == 'O') { o++; }
	}
	cout << a << endl << b << endl << ab << endl << o << endl;
	return 0;
}