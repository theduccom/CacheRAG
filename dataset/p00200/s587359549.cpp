#include <iostream>
#include <set>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
using namespace std;
typedef pair<int,int> P;
int n,m,K;
int cost[100][100],tim[100][100];
int main()
{
    while(cin>>n>>m&&(n||m)){
		fill(cost[0],cost[100],1000000);
		fill(tim[0],tim[100],1000000);
		for(int i=0;i<n;i++){
			int a,b,c,t;cin>>a>>b>>c>>t;a--;b--;
			cost[a][b]=cost[b][a]=c;
			tim[a][b]=tim[b][a]=t;
		}
		for(int k=0;k<m;k++)
			for(int i=0;i<m;i++)
				for(int j=0;j<m;j++){
					cost[i][j]=min(cost[i][j],cost[i][k]+cost[k][j]);
					tim[i][j]=min(tim[i][j],tim[i][k]+tim[k][j]);
				}
		cin>>K;
		while(K--){
			int p,q,r;
			cin>>p>>q>>r;p--;q--;
			if(r==0)cout<<cost[p][q]<<endl;
			else cout<<tim[p][q]<<endl;
		}
	}
    return 0;
}