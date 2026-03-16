#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<queue>
#include<map>
#include<math.h>
#include<iomanip>
#include<set>
#include<numeric>
#include<cstring>
#include<cstdio>
#include<functional>
#include<bitset>
#include<limits.h>
#include<cassert>
#include<iterator>
#include<complex>
#include<stack>
#include<sstream>
#include<iterator>
#include<list>

using namespace std;

typedef  long long int lint;

#define rep(i, n) for (lint i = 0; i < n; i++)
#define sort(v) sort((v).begin(), (v).end())
#define reverse(v) reverse((v).begin(), (v).end())
#define upper(v,hoge) upper_bound(v.begin(),v.end(),hoge)
#define lower(v,hoge) lower_bound(v.begin(),v.end(),hoge)
#define llower(v,hoge) *lower_bound(v.begin(), v.end(), hoge)
#define lupper(v,hoge) *upper_bound(v.begin(), v.end(), hoge)
#define mp make_pair
#define IP pair<int,int>
#define enld endl

int main() {
	map<char, lint>MP;
	MP['I'] = 1;
	MP['V'] = 5;
	MP['X'] = 10;
	MP['L'] = 50;
	MP['C'] = 100;
	MP['D'] = 500;
	MP['M'] = 1000;
	string S;
	while (cin >> S) {
		reverse(S);
		lint Z = S.size();
		lint ans = 0;
		ans += MP[S[0]];
		for (lint i = 1; i < Z; i++) {
			if (MP[S[i]] >= MP[S[i - 1]]) {
				ans += MP[S[i]];
			}
			else {
				ans -= MP[S[i]];
			}
		}
		cout << ans << enld;
	}
}
