#define scanf_s scanf
//#define gets_s gets
#include <stdio.h>
#include <string>
#include <iostream>
#include <math.h>
using namespace std;
#define MAX 5
#define MIN -100001
#define _MAX 8
#define ONE 1
#define TWO 2
#define THREE 3
#define FOUR 6
#define FULL 5
#define STRAIT 4
int main(void)
{
	char *a[_MAX] = { "null","one pair","two pair","three card","straight","full house","four card" };
	int card[5], cou[5] = { 0 }, ans;
	int bo = 1, x;
	while (scanf_s("%d,%d,%d,%d,%d", &card[0], &card[1], &card[2], &card[3], &card[4 ]) != EOF) {
		ans = 0;
		for (int i = 0; i < MAX; ++i) {
			cou[i] = 0;
			for (int j = MAX - 1; j > i; --j) {
				if (card[j] < card[j - 1]) {
					x = card[j]; card[j] = card[j - 1]; card[j - 1] = x;
				}
			}
		}
		for (int i = 0; i < MAX - 1; ++i) 
			if (card[i] == card[i + 1]) ++cou[i + 1] += cou[i];

		for (int i = 0; i < MAX; ++i) {
			if (i + 1 == MAX || cou[i + 1] == 0) {
				if (cou[i] > 0) {
					//1...one, 2...1.1, 3...2 4...3,5...2,1
					if (ans == 0) {
						//??????????????????1???
						if (cou[i] == 1) ans = ONE;
						else if (cou[i] == 2) ans = THREE;
						else if (cou[i] == 3) { ans = FOUR; break; }
					}
					else if (ans == ONE) {
						if (cou[i] == 1) { ans = TWO; break; }
						else if (cou[i] == 2) { ans = FULL; break; }
					}
					else if (ans == THREE) {
						if (cou[i] == 1) { ans = FULL; break; }
					}
				}
			}
		}
		if (ans == 0) {
			for (int i = MAX - 1; i >= 1; --i) {
				if (i == 1) {
					if (card[i] == card[i - 1] + 1) ans = STRAIT;
					else {
						if (card[4] == 13 && card[0] == 1) ans = STRAIT;
					}
				}
				if (card[i] != card[i - 1] + 1) break;
			}
		}
		printf("%s\n",a[ans]);
	}
}