#include<bits/stdc++.h>
#define rep(i,n)for(ll i=0;i<n;i++)
using namespace std;
typedef long long ll;
typedef pair<int, int>P;

int main() {
	string s;
	int cnt = 0;
	while (cin >> s) {
		string r = s;
		reverse(r.begin(), r.end());
		if (r == s)cnt++;
	}
	cout << cnt << endl;
	return 0;
}