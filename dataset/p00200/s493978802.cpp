#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<ll,ll> mp;
#define inf 1e9


int main(){
	while(1){
	int n,m;
	cin>>n>>m;
	if(n==0)break;
	vector<vector<mp> > gt(m);
	vector<vector<mp> > gc(m);
	vector<vector<ll> > dpt(m,vector<ll> (m,inf) );
	vector<vector<ll> > dpc(m,vector<ll> (m,inf) );
	for(int i=0;i<n;i++){
		ll a,b,c,t;
		cin>>a>>b>>c>>t;
		a--,b--;
		dpc[a][b]=dpc[b][a] = c;
		dpt[a][b] = dpt[b][a] = t;
	}
	for(int i=0;i<m;i++)dpc[i][i] = dpt[i][i] = 0;
	for(int k=0;k<m;k++)
		for(int i=0;i<m;i++)
			for(int j=0;j<m;j++)
				if(dpc[i][k] != inf && dpc[k][j] != inf){
					dpc[i][j] = min(dpc[i][j],dpc[i][k]+dpc[k][j]);
					dpt[i][j] = min(dpt[i][j],dpt[i][k]+dpt[k][j]);
				}
	int k;
	cin>>k;
	for(int i=0;i<k;i++){
		int p,q,r;
		cin>>p>>q>>r;
		p--,q--;
		if(r==0){
			cout<<dpc[p][q]<<endl;
		}else{
			cout<<dpt[p][q]<<endl;
		}
	}
	}

	return 0;
}

