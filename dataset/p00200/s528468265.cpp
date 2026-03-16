#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	while(cin >> n >> m,n){
		int a,b,c,d;
		int co[m][m];
		int ti[m][m];
		for(int i = 0; i < m; i++)
			for(int j = 0; j < m; j++){
				co[i][j] = 100000000;
				ti[i][j] = 100000000;
			}
		for(int i = 0; i < n; i++){
			cin >> a >> b >> c >> d;
			a--; b--;
			co[a][b] = c;
			co[b][a] = c;
			ti[a][b] = d;
			ti[b][a] = d;
		}
		int asd,p,q,r;
		cin >> asd;
		for(int l = 0; l < m; l++)
			for(int j = 0; j < m; j++)
				for(int k = 0; k < m; k++){
						co[j][k] = min(co[j][k] , co[j][l] + co[l][k]);
						ti[j][k] = min(ti[j][k] , ti[j][l] + ti[l][k]);
				}
		for(int i = 0; i < asd; i++){
			cin >> p >> q >> r;
			p--; q--;
			cout << (r == 0 ? co[p][q] : ti[p][q]) << endl;
		}
	}
	return 0;
}