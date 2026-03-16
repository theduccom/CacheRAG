#include<iostream>
using namespace std;
int a, b, c, d, e; char f;
int main() {
	while (cin >> a >> f >> b >> f >> c) {
		if (a*a + b*b == c*c) { d++; }
		if (a == b) { e++; }
	}
	cout << d << endl << e << endl;
}