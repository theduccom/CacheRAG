#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main()
{
	double x, h;
	while (true){
		cin >> x >> h;
		if (x == 0 && h == 0){
			break;
		}
		double ans = x*sqrt(4 * h*h + x*x) + x*x;
		printf("%lf\n", ans);
	}
}