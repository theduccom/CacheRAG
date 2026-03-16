#include<stdio.h>
#include<iostream>
#include<math.h>
#include<algorithm>
#include<string>
#define pi 3.14159
using namespace std;

int main() {
	double ang = pi / 2;
	double X = 0, Y = 0;
	while(1) {
		int x, y;
		scanf("%d, %d",&x, &y);
		if (x == 0 && y == 0) break;
		X = X + x * cos(ang);
		Y = Y + x * sin(ang);
		ang = ang - y * pi / 180;
	}
	printf("%d\n%d\n", (int)X, (int)Y);

	return 0;
}