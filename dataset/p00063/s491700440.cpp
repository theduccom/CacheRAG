#include <bits/stdc++.h>
using namespace std;

const int INF = 1e+9;

int main() {
	string s;
	int cnt = 0;
	while(cin >> s){
		string t = s;
		reverse(t.begin(), t.end());
		if(t == s)
			cnt++;
	}
	cout << cnt << endl;
	return 0;
}