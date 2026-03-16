#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int main() {
	vector<double>l;
	double x, h;
	while (cin >> x >> h){
		if (x == 0 && h == 0)break;
		double sqr = x*x;
		double tri = sqrt(x/4*x + h*h)*x / 2;
		l.push_back(sqr + tri * 4);
	}
	for (double i : l) {
		printf("%.6f\n", i);
	}
	char ch;
	cin >> ch;
}