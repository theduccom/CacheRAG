#define scanf_s scanf
//#define gets_s gets
#include <stdio.h>
#include <string>
#include <iostream>
#include <math.h>
using namespace std;
#define MAX 10
#define MIN -100001
#define _MAX 10
int main(void)
{
	int a, b, c, s = 0, h = 0;
	while (scanf_s("%d,%d,%d", &a, &b, &c) != EOF) {
		if (a == b) ++h;
		else if (c*c == a*a + b*b) {
			++s;
		}
	}
	printf("%d\n%d\n", s, h);
}	