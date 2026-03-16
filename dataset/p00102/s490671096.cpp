#include <cstdio>
#include <iostream>
typedef long long ll;
#define rep2(x,from,to) for(int x=(from);(x)<(to);(x)++)
#define rep(x,to) rep2(x,0,to)

using namespace std;

int main() {
	int n;
	int a[15][15];	
	while(scanf("%d", &n), n) {
		rep(i,15) {
			rep(j,15) {
				a[i][j] = 0;
			}
		}
		rep(i,n) {
			rep(j,n) {
				cin >> a[i][j];
			}
		}
		rep(i,n) {
			rep(j,n) {
				a[i][n] += a[i][j];
			}
		}
		rep(i,n+1) {
			rep(j,n) {
				a[n][i] += a[j][i];
			}
		}
		
		rep(i,n+1) {
			rep(j,n+1) {
				printf("%5d", a[i][j]);
			}
			cout << endl;
		}
	}
	return 0;
}