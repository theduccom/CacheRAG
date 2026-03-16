#define scanf_s scanf
//#define gets_s gets
#include <stdio.h>
#include <string>
#include <iostream>
#include <math.h>
using namespace std;
#define MAX 50//00
#define MIN -100001
#define _MAX 100
#define g 9.8
#define d 4.9
int main(void)
{
	int ans;
	double v, y, a, t;
	while (scanf_s("%lf", &a) != EOF) {
		t = a / g;
		y = d * t * t;
		ans = y / 5;
		if (y > ans * 5) ++ans;
		printf("%d\n", ans + 1);
	}
}