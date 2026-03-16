#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main() {
	double x, h;
	while (cin >> x >> h&&x != 0 && h != 0) {
		double root = sqrt((x*x/4)+(h*h));
		double y = x*x + 2 * x*root;
		cout <<fixed<<setprecision(6)<< y << endl;;
	}
	return 0;
}