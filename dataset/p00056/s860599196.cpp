#include <iostream>
#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
#define _USE_MATH_DEFINES
#include <math.h>

#define MAX_N 50001
bool IsPrime[MAX_N];

void q56() {
	memset(IsPrime, 1, sizeof(IsPrime));
	IsPrime[0] = false;
	IsPrime[1] = false;
	for (int i = 0; i < sqrt(MAX_N); i++) {
		if (!IsPrime[i]) continue;
		for (int j = i * 2; j < MAX_N; j += i) {
			IsPrime[j] = false;
		}
	}
	int n;
	for (; cin >> n;) {
		if (!n) break;
		int cnt = 0;
		for (int i = 0; i < (double)(n+1)/2; i++) {
			if (IsPrime[i] && IsPrime[n - i]) cnt++;
		}
		cout << cnt << endl;
	}
}
int main() {
	q56();
	return 0;
}