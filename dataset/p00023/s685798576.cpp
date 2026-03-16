
#include<stdio.h>
#include <algorithm>
#include <cassert>
#include <cctype>
#include <climits>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <iostream>
#include <iterator>
#include <list>
#include <map>     
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <iomanip>
#include <stack>
#include <string>
#include <vector>
using namespace std;
#define ll long long
#define ld long double
#define roop(a,t) for(int a=0;a<t;a++) 
int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	ld x[2], y[2], r[2];
	ll n;
	cin >> n;
	roop(i, n) {
		roop(lp, 2) {
			cin >> x[lp] >> y[lp] >> r[lp];
		}
		ld ab = sqrt((x[0] - x[1])*(x[0] - x[1]) + (y[0] - y[1])*(y[0] - y[1]));
		if (r[0] + r[1] < ab) { cout << 0 << endl; continue; }
		else if (r[0] + r[1] == ab) { cout << 1 << endl; continue; }
		else {
			if (r[0] > r[1]) {
				if (r[0] > r[1] + ab) { cout << 2 << endl; continue; }
			}
			else {
				if (r[1] > r[0] + ab) { cout << -2 << endl; continue; }
			}
		}cout << 1 << endl;

	}
	return 0;
}
