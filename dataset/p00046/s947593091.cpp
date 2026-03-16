#define scanf_s scanf
//#define gets_s gets
#include <stdio.h>
#include <string>
#include <iostream>
#include <math.h>
using namespace std;
#define MIN -1
#define MAX 1000000
int main(void)
{
	double  min = MAX, max = MIN,x;
	while (scanf_s("%lf",&x) != EOF) {
		if (x > max) max = x;
		if (x < min) min = x;
	}
	printf("%f\n", max - min);
}