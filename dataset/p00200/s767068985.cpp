#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int i,j,k,m,n,a,b,c,t,co[100][100],ti[100][100];
	while(cin >> n >> m) {
		if (n+m==0) break;
		for (i=0;i<m;i++) for (j=0;j<m;j++) { co[i][j]=ti[i][j]=999999;}
		for (i=0;i<n;i++) {
			cin >> a >> b >> c >> t; a--; b--;
            co[a][b]=co[b][a]=c; ti[a][b]=ti[b][a]=t;
		}
		for (k=0;k<m;k++) for (i=0;i<m;i++) for (j=0;j<m;j++) {
			co[i][j]=min(co[i][j],co[i][k]+co[k][j]);
			ti[i][j]=min(ti[i][j],ti[i][k]+ti[k][j]);
		}
		cin >> k;
		for (i=0;i<k;i++) {
			cin >> a >> b >> c; a--; b--;
			if (c==0) cout << co[a][b] << endl; else cout << ti[a][b] << endl;
		}
	}
	return 0;
} 