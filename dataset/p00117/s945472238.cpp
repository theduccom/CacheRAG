#include<iostream>
#include<algorithm>
using namespace std;
int n,m,a,b,c,d,x,y,e,f=1000000000,cnt[25][25],ans[25];
void DFS(int set,int len){ans[set]=min(len,ans[set]);for(int i=0;i<n;i++)if(len+cnt[set][i]<ans[i])DFS(i,len+cnt[set][i]);}
int main(){cin>>n>>m;
	for(int i=0;i<n;i++){ans[i]=f;for(int j=0;j<n;j++)cnt[i][j]=f;}char z;
	for(int i=0;i<m;i++){cin>>a>>z>>b>>z>>c>>z>>d;a--,b--,cnt[a][b]=c,cnt[b][a]=d;}
	int tans=0;
	cin>>x>>z>>e>>z;x--,e--;DFS(x,0);tans+=ans[e];for(int i=0;i<n;i++)ans[i]=f;DFS(e,0);tans+=ans[x];cin>>x>>z>>y;cout<<x-y-tans<<endl;
	return 0;
}