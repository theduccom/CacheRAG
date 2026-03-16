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
#define rep(a,t) for(ll a=0;a<t;a++) 
#define forever while(true)
#define Sort(a) sort(a.begin(),a.end())
#define Reverse(a) reverse(a.begin(),a.end())
#define pb push_back
int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	ll in1, in2, in3;
	while (true) {
		cin >> in1 >> in2 >> in3;
		if (in1 == 0 && in2 == 0 && in3 == 0) { break; }
		vector<ll>a;
		a.pb(in1);
		a.pb(in2);
		a.pb(in3);

		Sort(a);
		ll n;
		cin >> n;
		double save = sqrt(a[0] * a[0] + a[1] * a[1]) / 2.00;
		rep(i, n) {
			double r;
			cin >> r;
			if (r > save) { cout << "OK" << endl; }
			else { cout << "NA" << endl; }
		}
		}return 0;

}
