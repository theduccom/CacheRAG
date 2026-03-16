#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <bitset>
 
#define rep(i, n) for(int i = 0; i < (n); i++)
#define FOR(i, a, b) for(int i = (a); i < (b); i++)
#define all(v) (v).begin(), (v).end()
#define rev(s) (s).rbegin(), (s).rend()
#define MP make_pair
#define X first
#define Y second
 
using namespace std;
 
typedef long long ll;
typedef pair<int, int> P;

int main(){
	int n, m;
	while(cin >> n >> m, n|m){
		vector<int> v(n);
		rep(i, n) cin >> v[i];
		sort(rev(v));
		int sum = 0;
		rep(i, n){
			if((i+1)%m) sum += v[i];
		}
		cout << sum << endl;
	}
	return 0;
}