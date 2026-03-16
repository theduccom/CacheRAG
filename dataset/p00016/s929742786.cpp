#include <iostream>
#include <cstdio>
#include <cmath>

const double PI = 3.14159265359;

using namespace std;

int main() {
	double x = 0.0, y = 0.0;
	int d, a;
	int ca = 90; //????????????????????????
	scanf("%d,%d", &d, &a);	

	do {
		x += d * cos(ca / 180.0 * PI);
		y += d * sin(ca / 180.0 * PI);
		ca -= a;
		scanf("%d,%d", &d, &a);	
		
	} while(d != 0 || a!= 0);

	cout << static_cast<int>(x) << endl << static_cast<int>(y) << endl;

	return 0;
}