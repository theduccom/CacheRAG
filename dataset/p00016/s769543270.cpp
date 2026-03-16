#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int main(){
	double x, y;
	double angle = 90;
	int a, b;
	while(1){
		scanf("%d,%d", &a, &b);
		if(a == 0 && b == 0) break;
		double rad = angle * M_PI / 180;
		x += a * cos(rad);
		y += a * sin(rad);
		angle -= b;
	}
	cout << (int)x << endl << (int)y << endl;
	return 0;
}