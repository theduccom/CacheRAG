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
#define all(v) (v).begin(),(v).end()
#define pf push_front
#define pb push_back
#define int long long
using namespace std;
const int INF=1000000007;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};

char mp[13][13];


void dfs(int y,int x){
  if(0<=x&&x<12&&0<=y&&y<12&&mp[y][x]=='1'){
    mp[y][x]='0';
    for(int i=0;i<4;i++){
      dfs(y+dy[i],x+dx[i]);
    }
  }else return ;
}

signed main(){

  while(cin>>mp[0][0]){
    rep(i,12)rep(j,12){
      if(i==j&&i==0)continue;
      else cin>>mp[i][j];
    }
    int ans=0;
    rep(i,12)rep(j,12){
      if(mp[i][j]=='1'){
        dfs(i,j);
        ans+=1;
      }
    }
    cout<<ans<<endl;
  }
  return 0;
}