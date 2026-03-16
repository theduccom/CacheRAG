#define scanf_s scanf
//#define gets_s gets
#include <stdio.h>
#include <string>
#include <iostream>
#include <math.h>
using namespace std;
#define MAX 1000//0
#define _MAX 81
int main(void)
{
	double x, h, ans;
	while (1) {
		scanf_s("%lf %lf", &x, &h);
		if (x == 0 & h == 0) break;
		ans = x * x + (sqrt((x / 2) *(x / 2) + h*h) * x / 2) * 4;
		printf("%f\n", ans);
	}

}