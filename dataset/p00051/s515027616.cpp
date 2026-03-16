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
	int n;
	cin >> n;
	while (n--) {
		char a[8];
		for (int i = 0; i < 8; i++)cin >> a[i];
		sort(a, a + 8);
		int m = atoi(a);
		reverse(a, a + 8);
		int M = atoi(a);
		cout << M - m << endl;
	}
	return 0;
}