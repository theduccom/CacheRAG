#include <bits/stdc++.h>
using namespace std;

#define for_(i,a,b) for(int i=(a);i<(b);++i)

int main() {
	int n, tbl[15][15];
	
	while (cin >> n, n) {
		for_(i,0,n) for_(j,0,n) cin >> tbl[i][j];
		
		tbl[n][n] = 0;
		for_(i,0,n) {
			int sumi = 0, sumj = 0;
			
			for_(j,0,n) {
				sumi += tbl[i][j];
				sumj += tbl[j][i];
			}
			
			tbl[i][n] = sumi;
			tbl[n][i] = sumj;
			tbl[n][n] += sumi;
		}
		
		for_(i,0,n+1) {
			for_(j,0,n+1) printf("%5d", tbl[i][j]);
			cout << endl;
		}
	}
}