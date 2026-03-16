#define _USE_MATH_DEFINES
#include<iostream>
#include<iomanip>
#include<algorithm>
#include<bitset>
#include<cctype>
#include<climits>
#include<cmath>
#include<cstdio>
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

int main() {
	cout << fixed << setprecision(8);
	for (double a; cin >> a;) {
		double s = a;
		for (int i = 2; i <= 10; i++)
			s += (i % 2) ? a = a / 3 : a = a * 2;
		cout << s << endl;
	}
	return 0;
}