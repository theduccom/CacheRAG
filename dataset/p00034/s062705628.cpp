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
	int n,l[MAX], v1, v2, sum = 0, sum2 = 0;
	double x1, x2;
	char ans;	  // 1, 2, 3, 4, 5, 6, 7, 8, 9,10,v1,v2
	while (scanf_s("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d", &l[0], &l[1], &l[2], &l[3], &l[4], &l[5], &l[6], &l[7], &l[8], &l[9], &v1, &v2) != EOF) {
		for (int i = 0; i < MAX; ++i) {
			sum += l[i];
		}
		x1 = (double)sum / (v1 + v2) * v1;
		x2 = (double)sum / (v1 + v2) * v2;
		for (int i = 0; i < MAX; ++i) {
			sum2 += l[i];
			if (sum2 >= x1 || sum - sum2 <= x2) {
				printf("%d\n", i + 1);
				break;
			}
		}
		sum = sum2 = 0;
	}

}