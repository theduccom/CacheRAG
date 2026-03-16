#include<iostream>
using namespace std;

int main() {
	bool ba, bb, bc;
	char x, y;
	ba = true;
	bb = false; bc = false;
	while (scanf("%c,%c", &x, &y) + 1) {
		if ((x == 'A'&&y == 'B') || (x == 'B'&&y == 'A')) { swap(ba, bb); }
		else if ((x == 'A'&&y == 'C') || (x == 'C'&&y == 'A')) { swap(ba, bc); }
		else if ((x == 'B'&&y == 'C') || (x == 'C'&&y == 'B')) { swap(bb, bc); }
	}
	if (ba == true) { cout << 'A' << endl; }
	else if (bb == true) { cout << 'B' << endl; }
	else if (bc == true) { cout << 'C' << endl; }
	return 0;
}