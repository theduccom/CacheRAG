#include<iostream>
#include<string>
#include<vector>
#include<utility>
#include<queue>
#include<algorithm>
#include<cmath>
#include<cstdio>
#define INF 147483647
#define llINF 9223372036854775807
#define pb push_back
#define mp make_pair 
#define F first
#define S second
#define ll long long

using namespace std;
//warshall_floyd
const int MAX_V=100;
int d[MAX_V][MAX_V];
int V;
void WF(){
  for(int k=1;k<=V;k++)
    for(int i=1;i<=V;i++)
      for(int j=1;j<=V;j++)
	d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
}
//end of warshall_floyd
int main(){
  int m;
  cin>>V>>m;
  for(int i=0;i<MAX_V;i++)
    for(int j=0;j<MAX_V;j++)
      d[i][j]=INF;
  for(int i=0;i<m;i++){
    int a,b,c,dd;
    scanf("%d,%d,%d,%d",&a,&b,&c,&dd);
    d[a][b]=c;
    d[b][a]=dd;
  }
  WF();
  int s,g,v,p;
  scanf("%d,%d,%d,%d",&s,&g,&v,&p);
  cout<<v-p-d[s][g]-d[g][s]<<endl;

  return 0;
}