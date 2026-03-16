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
	int i = 0, sum1 = 0, sum2 = 0;
	char c;
	for (int a, b; cin >> a >> c >> b; i++) {
		sum1 += a*b;
		sum2 += b;
	}
	cout << sum1 << endl << round((double)sum2 / i) << endl;
	return 0;
}