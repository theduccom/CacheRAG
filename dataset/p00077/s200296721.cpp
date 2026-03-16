//#define scanf_s scanf
#define gets_s gets
#include <stdio.h>
#include <string>
#include <iostream>
#include <math.h>
using namespace std;
#define MAX 101
#define _MAX 81
int main(void)
{
	char str[MAX];
	while (gets_s(str) != NULL) {
		for (int i = 0; str[i] != '\0'; ++i) {
			if (str[i] == '@') {
				for (int j = 0; j < str[i + 1] - '0'; ++j) {
					printf("%c", str[i + 2]);
				}
				i += 2;
			}
			else {
				printf("%c", str[i]);
			}
		}
		printf("\n");
	}
}