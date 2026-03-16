#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

bool fourcard(int h[5]) {
	if ((h[0] == h[1] && h[0] == h[2] && h[0] == h[3]) ||
		(h[4] == h[1] && h[4] == h[2] && h[4] == h[3]) )
		return true;
	return false;
}

bool fullhouse(int h[5]) {
	if ((h[0] == h[1] && h[0] == h[2] && h[3] == h[4]) ||
		(h[0] == h[1] && h[4] == h[2] && h[4] == h[3]) )
		return true;
	return false;
}

bool straight(int h[5]) {
	if (h[0] == 1 && h[1] != 2) {
		for (int i = 1; i < 5; i++)
			if (h[i] != i + 9)
				return false;
	}
	else {
		for (int i = 0; i < 4; i++)
			if (h[i] + 1 != h[i+1])
				return false;
	}
	return true;
}

bool threecard(int h[5]) {
	for (int i = 0; i < 3; i++)
		if (h[i] == h[i+1] && h[i] == h[i+2])
			return true;
	return false;
}

int pairs(int h[5]) {
	int ret = 0;
	for (int i = 0; i < 4; i++)
		if (h[i] == h[i+1]) {
			ret++;
			i++;
		}
	return ret;
}

int main() {
	int h[5];
	while (scanf("%d,%d,%d,%d,%d", &h[0], &h[1], &h[2], &h[3], &h[4]) != EOF) {
		sort(h, h + 5);
//		for (int i = 0; i < 5; i++)
//			printf("%d ", h[i]);
//		printf("\n");
		if (fourcard(h)) printf("four card\n");
		else if (fullhouse(h)) printf("full house\n");
		else if (straight(h)) printf("straight\n");
		else if (threecard(h)) printf("three card\n");
		else {
			int n = pairs(h);
			switch (n) {
				case 1: printf("one pair\n"); break;
				case 2: printf("two pair\n"); break;
				default: printf("null\n"); break;
			}
		}
	}
	return 0;
}