#define _USE_MATH_DEFINES
#include<iostream>
#include<iomanip>
#include<algorithm>
#include<cctype>
#include<cmath>
#include<cstdio>
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
	for (int n; cin >> n&&n;) {
		int a = 0, b = 0;
		while (n) {
			for (int i = 1; (n % (5 * i)) == 0; i *= 5) a++;
			for (int i = 1; (n % (2 * i)) == 0; i *= 2) b++;
			n--;
		}
		cout << min(a, b) << endl;
	}
	return 0;
}