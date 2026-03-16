#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
#define EPS 1e-9
using namespace std;
typedef long long ll;
typedef pair<string, int>P;

int main() {
	double d, w, h;
	while (cin >> d >> w >> h, d) {
		double n; cin >> n;
		rep(i, n) {
			int r; cin >> r;
			if (r*2 > sqrt(d*d + w*w) || r*2 > sqrt(d*d + h*h) || r*2 > sqrt(w*w + h*h))
				puts("OK");
			else puts("NA");
		}
	}
}