#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;
int main() {
	double sum,x,y,b,c;
	int a, d;
	a = 0;
	x = 0;
	y = 0;
	sum = 0;
	while (scanf("%d,%d",&d,&a)) {
		if (a == 0 && d == 0) break;
		b = (double)a;
		c = (double)d;
		x += c*cos(sum*3.1416/180);
		y += c*sin(sum*3.1416/180);
		sum += b;
	}
	cout << (int)y << endl;
	cout << (int)x << endl;
	return 0;
}