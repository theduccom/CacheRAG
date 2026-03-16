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
	int x, n[MAX] = { 1,2,4,8,16,32,64,128,256,512 }, cou = 0, m[MAX];
	while (scanf_s("%d", &x) != EOF) {
		for (int i = MAX - 1; i >= 0; --i) {
			if (x >= n[i]) {
				x -= n[i];
				m[cou] = n[i]; ++cou;
			}
		}
		for (int i = cou - 1; i >= 0; --i) {
			if (i != cou - 1) printf(" ");
			printf("%d", m[i]);
		}
		printf("\n");
		cou = 0;
	}
}	