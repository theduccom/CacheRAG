#include <bits/stdc++.h>
using namespace std;

#define for_(i,a,b) for(int i=(a);i<(b);++i)

int main() {
	int n;
	
	while (cin >> n, n) {
		vector< int > cnt(10, 0);
		
		for_(i,0,n) {
			int a;
			cin >> a;
			++cnt[a];
		}
		
		for_(i,0,10) {
			if (cnt[i] == 0) cout << "-";
			for_(j,0,cnt[i]) cout << "*";
			cout << endl;
		}
	}
}