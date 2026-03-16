#include<stdio.h>
#include<string.h>
#include<iostream>
int hideo[2000001] = { 0 };
int main(void)
{
	int noyori = 0, debu = 0, n, temp = 1, ruio[32] = { 0 }, x;
	while (scanf("%d %d", &n, &x)) {
		if (n == 0 && x == 0) {
			return 0;
		}
		for (int i = 1; i <= n; i++) {
			scanf("%d", &ruio[i]);
			hideo[ruio[i]] = 1;
		}
		while (temp != x) {
			if (hideo[temp] == 1) {
				for (int j = 1; j <= n; j++) {
					if (temp + ruio[j] > x)continue;
					if (hideo[temp + ruio[j]] == 0) {
						hideo[temp + ruio[j]] = 1;
					}
				}
			}
			temp++;
		}
		for (int i = x; i >1; i--) {
			if (hideo[i] == 1) {
				for (int j = 2; j < i - 1; j++) {
					if (i%j == 0) {
						debu = 1;
					}
				}
				if (debu == 0) {
					noyori = i;
					break;
				}
			}
			debu = 0;
		}
		if (noyori > 1) {
			printf("%d\n", noyori);
		}
		else {
			printf("NA\n");
		}
		temp = 1;
		noyori = 0;
		debu = 0;
		memset(ruio, 0, sizeof(ruio));
		memset(hideo, 0, sizeof(hideo));
	}
	return 0;
}