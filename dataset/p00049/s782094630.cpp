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
	map<string, int> B;
	int n;	char c; string b;
	while (cin >> n >> c >> b)
		B[b]++;
	cout << B["A"]++ << endl;
	cout << B["B"]++ << endl;
	cout << B["AB"]++ << endl;
	cout << B["O"]++ << endl;
	return 0;
}