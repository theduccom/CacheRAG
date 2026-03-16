#define _USE_MATH_DEFINES
#include <iostream>
#include <queue>
#include <vector>
#include <math.h>
#include <algorithm>
#include <iomanip>
#include <string>
#include <stack>
#include <cctype>
#include <cstdlib>
#include <string.h>
#include <utility>
#include <cstdio>
#include <set>
#include <map>
#include <assert.h>
using namespace std;

#define INF (1 << 20)
#define EPS (1e-10)
#define EQ(a,b) (fabs((a)-(b)) < EPS)

#define ll long long
#define LL long long

int main() {
	int w;
	while (cin >> w) {
		int bun = 1;
		int flg = 0;
		while (bun != 1024) {
			if (w % (2 * bun)) {
				if (flg) cout << ' ';
				cout << bun;
				w -= bun;
				flg++;
			}
			bun *= 2;
		}
		cout << endl;
	}
	return 0;
}