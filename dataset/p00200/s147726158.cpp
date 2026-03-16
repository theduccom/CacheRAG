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
		vector <int> used;
		vector <int> dist;
		int k,p,q,r;
		cin >> k;
		for(int i = 0; i < k; i++){
			cin >> p >> q >> r;
			p--; q--;
			used = vector <int> (m,100000000);
			dist = vector <int> (m,100000000);
			dist[p] = 0;
			while(1){
				int va = -1;
				for(int j = 0; j < m; j++)
					if(used[j] == 100000000 && (va == -1 || dist[va] > dist[j]))
						va = j;
				if(va == -1)
					break;
				used[va] = 1;
				for(int j = 0; j < m; j++)
					dist[j] = min(dist[j] , (r == 0 ? co[j][va] : ti[j][va]) + dist[va]);
			}
			cout << dist[q] << endl;
		}
	}
	return 0;
}