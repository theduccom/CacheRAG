#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <vector>
#include <cstdlib>
#include <list>
#include <cmath>

#define _USE_MATH_DEFINES
#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)
#define INF 999999999
#define atcoder 1000000007
#define MAX_N 100

using namespace std;

int V[10] = { 1,2,4,8,16,32,64,128,256,512 };
bool judge[10] = { false };

int main() {

	int n, cnt = 0;

	while (cin >> n && n!= EOF) {
		REPR(i,9) {
			if (n >= V[i]) {
				judge[i] = true;
				n -= V[i];
			}
			if (n == 0)
				break;
		}

		REP(i,10) {
			if (judge[i] == true) {
				if (cnt != 0)cout << " ";
				cnt++;
				cout << V[i];
				
			}
			judge[i] = false;
		}
		cnt = 0;
		cout << endl;
	}

	return 0;
}