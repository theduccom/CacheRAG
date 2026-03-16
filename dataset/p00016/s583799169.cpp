#include <bits/stdc++.h>
using namespace std;

#define PI 3.1415926535

int main(void){
	double x=0.0,y=0.0,d,a,ang=0.0;
	int xint,yint;
	scanf("%lf,%lf",&d,&a);
	while(d!=0.0 || a!=0.0){
		x += d*sin(ang);
		y += d*cos(ang);
		a *= (PI/180);
		ang += a;
		scanf("%lf,%lf",&d,&a);
	}
	xint = x;
	yint = y;
	cout << xint << endl << yint << endl;
	return 0;
}