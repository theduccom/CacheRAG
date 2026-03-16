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
	double M, m;
	double a; cin >> a; M = m = a;
	while (cin >> a) {
		M = max(M, a);
		m = min(m, a);
	}
	cout << fixed << setprecision(1);
	cout << M - m << endl;
	return 0;
}