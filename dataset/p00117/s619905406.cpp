#include<iostream>
#include<string.h>
#include<cstdio>
#include<algorithm>
#include<stack>
#include<queue>
#include<vector>
#include<cmath>
#include<utility>
#define ll long long int
#define ld long double
#define INF 1000000000
#define EPS 0.0000000001
#define rep(i,n) for(i=1;i<=n;i++)
using namespace std;
typedef pair<int, int> P;

string str;

int main()
{
  int i,j,k;
  int n,m,a,b;
  int s,g,v,p;
  int cost[25][25]={};

  cin>>n>>m;

  rep(i,n)rep(j,n)cost[i][j]=INF;
  rep(i,n)cost[i][i]=0;

  rep(i,m){
    scanf("%d,%d,",&a,&b);
    scanf("%d,%d",&cost[a][b],&cost[b][a]);
  }
  scanf("%d,%d,%d,%d",&s,&g,&v,&p);

  rep(k,n)rep(i,n)rep(j,n)
    cost[i][j]=min(cost[i][j],cost[i][k]+cost[k][j]);

  cout<<v-p-cost[s][g]-cost[g][s]<<endl;

}