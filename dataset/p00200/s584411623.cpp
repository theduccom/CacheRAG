#include<iostream>
#include<string>
#include<vector>
#include<cstdio>
#include<sstream>
#include<algorithm>
#include<cmath>
#include<map>
#include<functional>
#include<set>
using namespace std;
int stoi(string x){stringstream ss;ss<<x;int tmp;ss>>tmp;return tmp;}
string itos(int x){stringstream ss;ss<<x;return ss.str();}
const int INF=1100000000;
int G1[250][250],G2[250][250];
int d1[250],d2[250];
bool u1[250],u2[250];
int main(){
	int n,m,r,s,e,f;
	while(cin>>n>>m,n!=0||m!=0){
	
	for(int i=0;i<250;i++)fill(G1[i],G1[i]+250,INF),fill(G2[i],G2[i]+250,INF);
	for(int i=0;i<n;i++){
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	G1[a][b]=G1[b][a]=c;
	G2[a][b]=G2[b][a]=d;
	}
	cin>>r;
for(int ccnt=0;ccnt<r;ccnt++){
	cin>>s>>e>>f;
	for(int i=0;i<250;i++)d1[i]=d2[i]=INF,u1[i]=u2[i]=0;
	d1[s]=0;
	int mini,to;
	for(int i=0;i<m;i++){
	mini=INF,to=0;
		for(int j=1;j<=m;j++){if(mini>d1[j]&&u1[j]==0)mini=d1[j],to=j;}
	for(int j=1;j<=m;j++)d1[j]=min(d1[j],G1[to][j]+d1[to]);
	u1[to]=1;
	}
	d2[s]=0;
	for(int i=0;i<m;i++){
		mini=INF,to=0;
		for(int j=1;j<=m;j++)if(mini>d2[j]&&u2[j]==0)mini=d2[j],to=j;
		for(int j=1;j<=m;j++)d2[j]=min(d2[j],G2[to][j]+d2[to]);
		u2[to]=1;
	}
	if(f==0)cout<<d1[e]<<endl;
	else cout<<d2[e]<<endl;
}
}
	return 0;
}