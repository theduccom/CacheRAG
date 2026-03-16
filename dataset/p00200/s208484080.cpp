#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
const int inf = 1e9;

void warshall(vector<vector<int> > &adj){
	int n = adj[0].size();
	for(int k=0; k<n; k++){
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				adj[i][j] = min(adj[i][j], adj[i][k]+adj[k][j]);
			}
		}
	}
}

int main(){
	while(1){
		int n,m;
		cin >> n >> m;
		if(n==0) break;
		
		vector<vector<int> > adjc(m+1, vector<int>(m+1, inf));
		vector<vector<int> > adjt(m+1, vector<int>(m+1, inf));
		for(int i=0; i<n; i++){
			int a,b,c,t;
			cin >> a >> b >> c >> t;
			adjc[a][b] = adjc[b][a] = c;
			adjt[a][b] = adjt[b][a] = t;
		}
		warshall(adjc);
		warshall(adjt);
		
		int k;
		cin >> k;
		for(int i=0; i<k; i++){
			int p,q,r;
			cin >> p >> q >> r;
			if(r==0){
				cout << adjc[p][q] << endl;
			}else{
				cout << adjt[p][q] << endl;
			}
		}
	}
	return 0;
}

