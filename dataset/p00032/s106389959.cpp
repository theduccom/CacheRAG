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
	char c;
	int T = 0, H = 0;
	for (int a, b, d; cin >> a >> c >> b >> c >> d;) {
		if (a*a + b*b == d*d)T++;
		else if (a == b)H++;
	}
	cout << T << endl << H << endl;
	return 0;
}