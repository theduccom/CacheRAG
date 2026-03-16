#include<iostream>
#include<cmath>
using namespace std;
double a, b; int c, d, e; char f;
#define A(D) sin(D*0.01745329252)
#define B(D) cos(D*0.01745329252)
int main() {
	while (true) {
		cin >> c >> f >> d;
		if (c == 0 && d == 0) { break; }
		a += 1.0*A(e) * c;
		b += 1.0*B(e) * c;
		e += d;
	}
	cout << (int)a << endl << (int)b << endl;
	return 0;
}