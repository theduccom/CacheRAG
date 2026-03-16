#include<iostream>
#include<queue>
#include<map>
#include<cstdio>
#include<algorithm>
#define INF 1000000
using namespace std;
typedef pair<int,int> P;
int main(){
  int n,m;
  cin>>n>>m;
  int a,b,c,d;
  int x1,x2,y1,y2;
  int cost[22][22];
  int dcost[22];
  int ans;
  for(int i=0;i<22;i++){
    for(int j=0;j<22;j++){
      cost[i][j]=INF;
    }
    dcost[i]=INF;
  }
  for(int i=0;i<m;i++){
    scanf("%d,%d,%d,%d",&a,&b,&c,&d);
    cost[a][b]=c;
    cost[b][a]=d;
  }
  scanf("%d,%d,%d,%d",&x1,&x2,&y1,&y2);
  ans=y1-y2;
  // ダイクストラ
  dcost[x1]=0;
  priority_queue<P,vector<P>,greater<P> > que;
  que.push(P(0,x1));
  
  while(!que.empty()){
    P p=que.top();
    que.pop();
    int v=p.second;
    int nc=p.first;
    for(int i=0;i<=n;i++){
      if(cost[v][i]!=INF && cost[v][i]+nc<dcost[i]){
	dcost[i]=cost[v][i]+nc;
	que.push(P(dcost[i],i));
      }
    }
  }
  ans-=dcost[x2];
  for(int i=0;i<22;i++){
    dcost[i]=INF;
  }
  
  dcost[x2]=0;
  
  que.push(P(0,x2));
  
  while(!que.empty()){
    P p=que.top();
    que.pop();
    int v=p.second;
    int nc=p.first;
    for(int i=0;i<=n;i++){
      if(cost[v][i]!=INF && cost[v][i]+nc<dcost[i]){
	dcost[i]=cost[v][i]+nc;
	que.push(P(dcost[i],i));
      }
    }
  }
  ans-=dcost[x1];
  cout<<ans<<endl;
}