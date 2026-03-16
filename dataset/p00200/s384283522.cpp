#include<iostream>
using namespace std;

int cost[101][101],t[101][101];
bool tf,cf;

int wf(int p,int q,int r,int m){
	if(r){
		if(tf){
		for(int k=1 ; k <= m ; ++k){
			for(int i=1 ; i <= m ; ++i){
				for(int j=1 ; j <= m ; ++j){
					if(t[i][j] > t[i][k] + t[k][j]) t[i][j] = t[i][k] + t[k][j];
				}
			}
		}
		tf = false;
			return t[p][q];
		}
		else return t[p][q];
		}
		else if(cf){
		for(int k=1 ; k <= m ; ++k){
			for(int i=1 ; i <= m ; ++i){
				for(int j=1 ; j <= m ; ++j){
					if(cost[i][j] > cost[i][k] + cost[k][j]) cost[i][j] = cost[i][k] + cost[k][j];
				}
			}
		}
		cf = false;
		return cost[p][q];
	}
	else return cost[p][q];
}

int main(){
	int a,b,c,d,n,m,k,p,q,r;
	
	while(cin >> n >> m && n && m){
		for(int i=1 ; i <= m ; ++i){
			for(int j=1 ; j <= m ; ++j){
				cost[i][j] = 10000;
				t[i][j] = 10000;
			}
		}
		cf = true;
		tf = true;
		for(int i=0 ; i < n ; ++i){
			cin >> a >> b >> c >> d;
			cost[a][b] = c;
			cost[b][a] = c;
			t[a][b] = d;
			t[b][a] = d;
		}
		cin >> k;
		for(int i=0 ; i < k ; ++i){
			cin >> p >> q >> r;
			cout << wf(p,q,r,m) << endl;
		}
	}
	return 0;
} 