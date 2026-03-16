#include<iostream>
using namespace std;

#define N 30
#define P 1000003

#define max(a,b) (a>b?a:b)

int main() {
	int n, x, c, dp[P], p[P], ans;
	for(int i=0; i<P; ++i) p[i] = 1;
	p[0] = p[1] = 0;
	for(int i=2; i<P; ++i) {
		if(p[i]&&i<P/i) for(int j=i*i; j<P; j+=i) p[j]=0;
	}
	while(1) {
		cin >> n >> x;
		if(!n&&!x) break;
		ans = 0;
		for(int i=0; i<=x; ++i) dp[i] = 0;
		dp[0] = 1;
		for(int i=0; i<n; ++i) {
			cin >> c;
			for(int j=0; j<=x-c; ++j) {
				if(dp[j]) {
					dp[j+c] = 1;
					if(p[j+c]) ans = max(ans, j+c);
				}
			}
		}
		if(ans==0) cout << "NA" << endl;
		else cout << ans << endl;
	}
	return 0;
}