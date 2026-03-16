#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <set>
#include <cstdio>
#include <cmath>
#include <queue>
#include <stack>
#define rep(i,l,n) for(lint i=l;i<n;i++)
#define rer(i,l,n) for(lint i=l;i<=n;i++)
#define all(a) a.begin(),a.end()
#define o(a) cout<<a<<endl
#define pb(a) push_back(a)
#define mk(a,b) make_pair(a,b)
#define fi first
#define se second
using namespace std;
typedef long long lint;
typedef vector<int> vi;
typedef vector<lint> vli;
typedef vector<vi> vvi;
typedef pair<int, int> pii;

int main(){
	while (1){
		queue<int> q;
		map<int,lint> m;
		bool f[4010] = {};
		int n;
		cin >> n;
		if (n == 0) break;
		int a, b, c;
		rep(i, 0, n){
			cin >> a >> b >> c;
			q.push(a);
			m[a] += (lint)b*c;
		}
		int ct = 0;
		while (!q.empty()){
			int x = q.front(); q.pop();
			if (m[x] >= 1000000 && f[x]==0){
				o(x); ct++; f[x] = 1;
			}
		}
		if (ct == 0){
			o("NA");
		}
	}

}