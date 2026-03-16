#include <iostream>
#include <cstdio>

using namespace std;

int main() {
	int A, B, AB, O;
	A = B = AB = O = 0;
	char type[8];
	int no;
	while (scanf("%d,%s", &no, type) != EOF) {
//		cout << no << " " << type << endl;
		if (type[0] == 'A' && type[1] == 'B')
			AB++;
		else if (type[0] == 'A')
			A++;
		else if (type[0] == 'B')
			B++;
		else if (type[0] == 'O')
			O++;
	}
	cout << A << endl;
	cout << B << endl;
	cout << AB << endl;
	cout << O << endl;
	return 0;
}