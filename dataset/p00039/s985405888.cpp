#include <bits/stdc++.h>  

using namespace std;

#define FOR(i, j, k) for(int i = j; i < k; ++i)
#define rep(i, j) FOR(i, 0, j)
#define repr(i, j) for(int i = j; i >= 0; --i)
#define INF (1 << 30)
#define MOD 1e9 + 7

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> P;

int number(char s) {
	switch(s) {
		case 'I' : return 1;
		case 'V' : return 5;
		case 'X' : return 10;
		case 'L' : return 50;
		case 'C' : return 100;
		case 'D' : return 500;
		case 'M' : return 1000;
	}
	return 0;
}

int main() {
	string s;
	while(cin >> s) {
		int tmp = number(s[0]);
		int num = number(s[1]);
		int ans;
		if(tmp < num) ans = num - tmp;
		else if(tmp >= num) ans = num + tmp;
		tmp = num; 
		FOR(i, 2, s.size()) {
			num = number(s[i]);
			if(tmp < num) {
				ans -= tmp;
				ans += num - tmp;
			}
			else if(tmp >= num) ans += num;
			tmp = num;
		}
		cout << ans << endl;
	}
	return 0;
}