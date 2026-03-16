#include <cstdio>
#include <cstring>
#define	BCD_SIZE	96

int checkOverFlow(char *numStr) {
	return strlen(numStr) > 80;
}

template <typename T> void mySwap(T &a, T &b) {
	T t = a; a = b; b = t;
}

template <typename T> void reverseArray(T a[], int n) {
	for (int i = n / 2 - 1; i >= 0; --i) { mySwap(a[i], a[n - i - 1]); }
}

void str2bcd(char *str, int n) {
	int len = (int)strlen(str), i;
	reverseArray(str, len);
	for (i = 0; i < len; ++i) { str[i] &= 0xf; }
	for (; i < n; ++i) { str[i] = 0; }
}

void bcd2str(char *bcd, int n) {
	int len;
	for (int i = n - 1; i >= 0 && bcd[i] == 0; --i) { len = i; }
	if (len <= 0) { len = 1; }
	reverseArray(bcd, len);
	for (int i = 0; i < len; ++i) { bcd[i] |= 0x30; }
}

void calcLargeIntSum(char sumStr[], char numStr[][BCD_SIZE], int numNum) {
	char carry = 0;
	for (int i = 0; i < numNum; ++i) { str2bcd(numStr[i], BCD_SIZE); }
	for (int i = 0; i < BCD_SIZE; ++i) {
		sumStr[i] = carry;
		for (int j = 0; j < numNum; ++j) { sumStr[i] += numStr[j][i]; }
		carry = sumStr[i] / 10;
		sumStr[i] %= 10;
	}
	bcd2str(sumStr, BCD_SIZE);
	for (int i = 0; i < numNum; ++i) { bcd2str(numStr[i], BCD_SIZE); }
}

int main() {
	char numStr[2][BCD_SIZE], sumStr[BCD_SIZE];
	int dataSet;
	for (scanf("%d", &dataSet); dataSet > 0; --dataSet) {
		scanf("%82s\n%82s", numStr[0], numStr[1]);
		if (checkOverFlow(numStr[0]) || checkOverFlow(numStr[1])) {
			puts("overflow");
			continue;
		}
		calcLargeIntSum(sumStr, numStr, 2);
		if (checkOverFlow(sumStr)) {
			puts("overflow");
			continue;
		}
		printf("%s\n", sumStr);
	}
	return 0;
}