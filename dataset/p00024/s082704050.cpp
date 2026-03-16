#include<iostream>
#include<cmath>
using namespace std;

double speed(double v) {
	double time = v / 9.8;
	double y = 4.9*time*time;
	double f =(y+5)/5 ;
	double fa = ceil(f);
	return fa;
}

int main() {
	double x;
	while (cin >> x) {
		cout << speed(x) << endl;
	}
	return 0;
}