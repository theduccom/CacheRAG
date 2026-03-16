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
#include <utility>
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
#define rep(a,t) for(int a=0;a<t;++a) 
#define forever while(true)
#define Sort(a) sort(a.begin(),a.end())
#define Reverse(a) reverse(a.begin(),a.end())
#define pb push_back
#define int_maxvalue numeric_limits<int>::max()
ll mod = 1e9 + 7;
int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	while (1) {
		int n;
		cin >> n;
		if (n == 0) { break; }
		ll a[4001];
		bool out[4001];
		rep(i, 4001) { a[i] = 0; out[i] = false; }
		bool flag = false;
		
		rep(i, n) {
			ll d, p, q;
			cin >> d >> p >> q;
			a[d] += p*q;
			if (a[d] >= 1000000 &&! out[d]) {
				flag = true;
				out[d] = true;
				cout << d << endl;
			}
		}
		/*for (int i = 1; i < 4001; i++) {
			if (a[i] >= 1000000) {
				flag = true;
				cout << i << endl;
			}
		}*/
		if (!flag) { cout << "NA" << endl; }
	}
	return 0;
}
