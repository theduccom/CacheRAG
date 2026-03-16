#include<iostream>
#include<vector>
#include<queue>
#include<map>
#include<cstdio>
using namespace std;
typedef pair<int,int> gaidou;//first=nextbangou,second=nowcost
main(){
  vector< gaidou > to[22];
  int min_cost[22];
  queue< gaidou > que;
  int n,m;
  int a,b,c,d;
  int x1,x2,y1,y2;
  int ans=0;
  gaidou g;
  cin>>n>>m;
  for(int i=1;i<=n;i++){
    min_cost[i]=1<<21;
  }
  for(int i=0;i<m;i++){
    scanf("%d,%d,%d,%d",&a,&b,&c,&d);
    g.first=b;
    g.second=c;
    to[a].push_back(g);
    g.first=a;
    g.second=d;
    to[b].push_back(g);
  }
  scanf("%d,%d,%d,%d",&x1,&x2,&ans,&y2);
  ans-=y2;
  //cout<<"A"<<ans<<endl;
  g.first=x1;
  g.second=0;
  que.push(g);
  while(!que.empty()){
    gaidou now=que.front();
    int size=to[now.first].size();
    for(int i=0;i<size;i++){
      if(to[now.first][i].second+now.second<min_cost[to[now.first][i].first]){
	min_cost[to[now.first][i].first]=to[now.first][i].second+now.second;
	g.first=to[now.first][i].first;
	g.second=to[now.first][i].second+now.second;
	//cout<<g.first<<" | "<<g.second<<endl;
	que.push(g);
      }
    }
    que.pop();
  }
  while(!que.empty()){
    que.pop();
  }
  ans-=min_cost[x2];
  //cout<<"B"<<ans<<endl;
  for(int i=1;i<=n;i++){
    min_cost[i]=1<<21;
  }
  g.first=x2;
  g.second=0;
  que.push(g);
  while(!que.empty()){
    gaidou now=que.front();
    //cout<<"now="<<now.first<<" "<<now.second<<endl;
    int size=to[now.first].size();
    for(int i=0;i<size;i++){
      if(to[now.first][i].second+now.second<min_cost[to[now.first][i].first]){
	min_cost[to[now.first][i].first]=to[now.first][i].second+now.second;
	g.first=to[now.first][i].first;
	g.second=to[now.first][i].second+now.second;
	//cout<<g.first<<" | "<<g.second<<endl;
	que.push(g);
      }
    }
    que.pop();
  }
  while(!que.empty()){
    que.pop();
  }
  ans-=min_cost[x1];
  cout<<ans<<endl;
}