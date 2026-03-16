//#define scanf_s scanf
#define gets_s gets
#include <stdio.h>
#include <string>
#include <iostream>
#include <math.h>
using namespace std;
#define MAX 101
int main(void)
{
	char str[MAX];
	int i, j, cou = 0;
	while (gets_s(str) != NULL) {
		++cou;
		for (i = 0; str[i] != '\0'; ++i);
		for (j = 0; j < i / 2; ++j) {
			if (str[j] != str[i - 1 - j]) {
				--cou; break;
			}
		}
	}
	printf("%d\n", cou);
}