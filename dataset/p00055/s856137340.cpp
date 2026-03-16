#define scanf_s scanf
//#define gets_s gets
#include <stdio.h>
#include <string>
#include <iostream>
#include <math.h>
using namespace std;
#define MAX 20001
int main(void)
{
	//		10			2
	double a, s = 0;
	while (scanf_s("%lf", &a) != EOF) {
		s += a;
		for (int i = 2; i <= 10; ++i) {
			if (i % 2) a /= 3;
			else a *= 2;
			s += a;
		}
		printf("%f\n",s);
		s = 0;
	}
}