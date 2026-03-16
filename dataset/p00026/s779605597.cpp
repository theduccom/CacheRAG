#include<iostream>
#include<iomanip>
#include<algorithm>
#include<bitset>
#include<cctype>
#include<climits>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<deque>
#include<list>
#include<map>
#include<set>
#include<stack>
#include<string>
#include<sstream>
#include<queue>
#include<vector>
using namespace std;

#define M 14

int main() {
	int A[M][M] = {};

	for (int x, y, size; scanf("%d,%d,%d", &x, &y, &size) != EOF;) {
		x += 2; y += 2;
		A[x][y]++;
		A[x + 1][y]++;
		A[x][y + 1]++;
		A[x - 1][y]++;
		A[x][y - 1]++;
		if (size == 1)continue;
		A[x + 1][y + 1]++;
		A[x + 1][y - 1]++;
		A[x - 1][y + 1]++;
		A[x - 1][y - 1]++;
		if (size == 2)continue;
		A[x + 2][y]++;
		A[x][y + 2]++;
		A[x - 2][y]++;
		A[x][y - 2]++;
	}

	int cnt = 100, MAX = 0;

	for (int x = 0; x < 10; x++) {
		for (int y = 0; y < 10; y++) {
			if (A[x + 2][y + 2]) {
				cnt--;
				MAX = max(MAX, A[x + 2][y + 2]);
			}
		}
	}
	cout << cnt << endl;
	cout << MAX << endl;
	return 0;
}