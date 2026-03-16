#define _USE_MATH_DEFINES
#include<iostream>
#include<iomanip>
#include<algorithm>
#include<cctype>
#include<cmath>
#include<cstdio>
#include<deque>
#include<list>
#include<set>
#include<stack>
#include<string>
#include<sstream>
#include<map>
#include<queue>
#include<vector>
using namespace std;

int main() {
	for (double V; cin >> V;) {
		for (int N = 1;; N++) {
			double y = 5 * N - 5;
			double t = sqrt(y / 4.9);
			double v = 9.8*t;
			if (v > V) {
				cout << N << endl;
				break;
			}
		}
	}
	return 0;
}