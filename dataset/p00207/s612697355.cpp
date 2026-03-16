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

int mp[101][101];
bool ans;
int w,h,tmp;
int xs,ys,xg,yg;

void dfs(int y,int x,int c){
  if(y>0&&y<=h&&x>0&&x<=w&&mp[y][x]==c){
    mp[y][x]=0;
    rep(i,4){
      dfs(y+dy[i],x+dx[i],c);
    }
  }else return;
  if(y==yg&&x==xg){
    ans=true;
    return;
  }
}

signed main(){
  while(cin>>w>>h,w){
    rep(i,w)rep(j,h)mp[i][j]==0;
    ans=false;
    cin>>xs>>ys>>xg>>yg;
    int n;
    cin>>n;
    rep(i,n){
      int c,d,x,y;
      cin>>c>>d>>x>>y;
      if(d==0)rep(i,2)rep(j,4)mp[y+i][x+j]=c;
      else rep(i,2)rep(j,4)mp[y+j][x+i]=c;
    }
    tmp=mp[ys][xs];
    if(mp[ys][xs]==tmp&&mp[yg][xg]==tmp)dfs(ys,xs,tmp);
    cout<<(ans?"OK":"NG")<<endl;
  }
return 0;
}