#include<functional>
#include<algorithm>
#include<iostream>
#include<utility>
#include<string>
#include<vector>
#include<cmath>
#include<stack>
#include<queue>
#include<deque>
#include<map>
#define rep(i,n) for(int i=0;i<n;i++)
#define loop(i,x,n) for(int i=x;i<n;i++)
#define pf push_front
#define pb push_back
#define int long long
using namespace std;
const int INF=1000000007;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};

int mp[20][20];
int bfs(int n,int s,int g){
  vector<int> dis(n);
  queue<int> q;
  rep(i,n)dis[i]=INF;
  dis[s]=0;
  q.push(s);

  int u;

  while(!q.empty()){
    u=q.front(),q.pop();
    rep(i,n){
      if(dis[i]>dis[u]+mp[u][i]){
        dis[i]=dis[u]+mp[u][i];
        q.push(i);
      }
    }
  }
    return dis[g];
}

signed main(){
  int n,m;
  cin>>n>>m;
  char x;
  rep(i,n)rep(j,n)mp[i][j]=INF;
  rep(i,m){
    int a,b,c,d;
    cin>>a>>x>>b>>x>>c>>x>>d;
    a--;b--;
    mp[a][b]=c;
    mp[b][a]=d;
  }
  int s,g,v,p;
  cin>>s>>x>>g>>x>>v>>x>>p;
  s--;g--;

  int sum1=bfs(n,s,g);
  int sum2=bfs(n,g,s);

  
  cout<<v-p-sum1-sum2<<endl;
    return 0;
}