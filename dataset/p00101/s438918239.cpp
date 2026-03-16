#define scanf_s scanf
#define sscanf_s sscanf
#define gets_s gets
#include <stdio.h>
#include <string>
#include <iostream>
#include <math.h>
using namespace std;
#define MAX 1001
#define HO 6
int main(void)
{
	int n;
	char str[MAX], no[] = { "Hoshino" }, na[] = { "Hoshina" };
	gets_s(str);
	sscanf_s(str, "%d", &n);
	for (int i = 0; i < n; ++i) {
		gets_s(str);
		for (int j = 0; str[j] != '\0'; ++j) {
			if (no[HO] == str[j] && j >= HO) {
				for (int k = 0; k <= HO; ++k) {
					if (str[j - k] != no[HO - k]) break;
					else if (k == HO) {
						str[j] = na[HO];
					}
				}
			}
			printf("%c", str[j]);
		}
		printf("\n");
	}
}