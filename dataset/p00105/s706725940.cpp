#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;
typedef long long ll;
typedef pair<string, int>P;

int main() {
	vector<P>v;
	string s; int n;
	while (cin >> s >> n) {
		v.push_back(P(s, n));
	}
	sort(v.begin(), v.end(), [](P a, P b) {return a.second < b.second; });
	stable_sort(v.begin(), v.end());
	rep(i, v.size()) {
		if (i&&v[i - 1].first == v[i].first) {
			cout << ' ' << v[i].second;
			continue;
		}
		if (i)cout << endl;
		cout << v[i].first << endl << v[i].second;
	}
	cout << endl;
}