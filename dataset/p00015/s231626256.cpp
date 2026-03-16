#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

#define rep2(x,from,to) for(int x=(from);(x)<(to);(x)++)
#define rep(x,to) rep2(x,0,to)
int main() {
	int n;
	cin >> n;
	while(n--) {
		string a, b;
		int x[84], y[84], s[84], max;
		cin >> a >> b;
		if(a.length() > 80 || b.length() > 80) {
			cout << "overflow" << endl;
			continue;
		}
		int i = 0, j = 0;
		for(; a[i] != '\0'; ++i) {
			x[i] = a[i] - '0';
		}
		for(; b[j] != '\0'; ++j) {
			y[j] = b[j] - '0';
		}
		
		if(i > j) {
			for(int k = j - 1; k >= 0; k--) {
				y[i-j+k] = y[k];
			}
			rep(k,i-j) {
				y[k] = 0;
			}
			max = i;
		} else if(i < j) {
			for(int k = i - 1; k >= 0; k--) {
				x[j-i+k] = x[k];
			}
			rep(k,j-i) {
				x[k] = 0;
			}
			max = j;
		} else max = i;
		bool f = 0;
		for(int k = max - 1; k >= 0; k--) {
			int c = x[k] + y[k];
			if(f) c++;
			if(c >= 10) {
				f = 1, c -= 10;
			} else f = 0;
			s[k] = c;
		}
		if(f) {
			max++;
		}
		if(max > 80) cout << "overflow" << endl;
		else {
			string ans;
			if(f) {
				ans += "1";
				max--;
			}
			rep(k,max) {
				ans += s[k] + '0';
			}
			cout << ans << endl;
		}
	}
	return 0;
}