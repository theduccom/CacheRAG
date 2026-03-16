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
		int N; double T, Y;
		T = V / 9.8;
		Y = 4.9*T*T;
		N = ceil((Y + 5) / 5);
		cout << N << endl;
	}
	return 0;
}