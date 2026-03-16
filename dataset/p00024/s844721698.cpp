#include<iostream>
#include<cmath>
using namespace std;
double s;
int main() {
	while (cin >> s) {
		cout << (int)((pow((1.0*s / 9.8), 2)*4.9) / 5) + 2 << endl;
	}
}