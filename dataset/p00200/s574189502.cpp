#include <iostream>
#define rep2(x,from,to) for(int x=(from);(x)<(to);(x)++)
#define rep(x,to) rep2(x,0,to)
using namespace std;
const int INF = 999999999;
int main(){
	int m, n, a, b, p, q, k, r;
	while(cin >> n >> m, (m||n)) {
		int c[110][110], t[110][110];
		rep(i,110) {
			rep(j,110) {
				c[i][j] = INF;
				t[i][j] = INF;
			}
		}
		rep(i,n) {
			cin >> a >> b >> p >> q;
			a--, b--;
			c[a][b] = c[b][a] = p;
			t[a][b] = t[b][a] = q;
		}
		rep(i,m) {
			rep(j,m) {
				rep(k,m) {
					c[j][k] = min(c[j][k], c[j][i]+c[i][k]);
					t[j][k] = min(t[j][k], t[j][i]+t[i][k]);
				}
			}
		}
		cin >> k;
		rep(i,k) {
			cin >> p >> q >> r;
			p--,q--;
			if(r==0) {
				cout << c[p][q] << endl;
			} else {
				cout << t[p][q] << endl;
			}
		}
	}
	return 0;
}