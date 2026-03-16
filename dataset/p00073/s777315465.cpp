#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main(void)
{
	double x, h, s, a;
	
	
	while(cin >> x >> h && x && h){
		double r = x / 2;
		a = sqrt(h * h + r * r);
		s = x * x + 4 * (x * a / 2);
		
		printf("%.6f\n", s);
	}
	return 0;
}