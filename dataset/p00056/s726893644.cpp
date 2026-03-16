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
int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	bool prime[50010];
	for (int i = 0; i < 50010; i++) {
		prime[i]=true;
	}
	prime[0] = prime[1]=false;
	for (int i = 2; i < 50010; i++) {
		if (!prime[i]) { continue; }
		for (int j = i * 2; j < 50010; j += i) {
			prime[j]=false;
		}
	}
	
	while (true) {
		int n;
		cin >> n;
		
		if (n == 0) { return 0; }
		int ans = 0;
		for (int i = 0; i <= n / 2; i++) {
			if (prime[i] && prime[n - i]) {
				ans++;
			}
		}
		cout << ans << endl;

	}
	return 0;
}
