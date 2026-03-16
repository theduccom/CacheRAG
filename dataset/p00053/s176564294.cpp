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
#define rep(a,t) for(int a=0;a<t;a++) 
#define forever while(true)
#define Sort(a) sort(a.begin(),a.end())
#define Reverse(a) reverse(a.begin(),a.end())
#define pb push_back
vector<int>Eratosthenes_10000ver(int n) {
	bool dp[1000000];
	for (int i = 0; i <=n; i++) { dp[i] = true; }
	dp[0] = dp[1] =false;
	vector<int>prime;
	for (int i = 2; i < n+1; i++) {
		if (!dp[i]) { continue; }
		prime.pb(i);
		for (int j = i * 2; j < n+1; j += i) {
			dp[j] = false;
		}
	}
	return prime;
	
}
int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	vector<int>primes=Eratosthenes_10000ver(300000);
	while (true) {
		int n;
		cin >> n;
		if (n == 0) { break; }
		long long ans = 0;
		rep(i, n) { ans += primes[i]; }
		cout << ans << endl;
	}
	return 0;
}
