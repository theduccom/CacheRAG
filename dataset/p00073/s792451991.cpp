#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int main() {
	vector<double>l;
	double x, h;
	while (cin >> x >> h){
		if (x == 0 && h == 0)break;
		double a, b;
		a = x / 2 * sqrt(x*x/4 + h*h);
		b = x*x;
		l.push_back(a * 4 + b);
	}
	for (double i:l) {
		printf("%.6f\n",i);
	}
	char c;
	cin >> c;
}