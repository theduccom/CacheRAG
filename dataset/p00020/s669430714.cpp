#define scanf_s scanf
#define gets_s gets
#include <stdio.h>
#include <string>
#include <iostream>
#include <math.h>
using namespace std;
#define MAX 201
#define _MAX 100
#define ABC 26
int main(void)
{
	int n;
	char str[MAX];
	long long int ans = 1;
	gets_s(str);
	for (int i = 0; str[i] != '\0'; ++i) {
		if ('a' <= str[i] && str[i] <= 'z') {
			str[i] = str[i] - 'a' + 'A';
		}
	}
	printf("%s\n", str);
}