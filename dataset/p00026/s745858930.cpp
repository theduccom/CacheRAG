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
int ex[4]={1,-1,1,-1};
int ey[4]={1,1,-1,-1};
int fx[4]={2,0,-2,0};
int fy[4]={0,2,0,-2};

int mp[20][20]={};

signed main(){
  int x,y,s;
  char z;
  while(cin>>x>>z>>y>>z>>s){
    if(s==1){
      mp[y][x]+=1;
      rep(i,4){
        if(y+dy[i]>=0&&x+dx[i]>=0){
          mp[y+dy[i]][x+dx[i]]+=1;
        }
      }
    }
    else if(s==2){
      mp[y][x]+=1;
      rep(i,4){
        if(y+dy[i]>=0&&x+dx[i]>=0){
          mp[y+dy[i]][x+dx[i]]+=1;
        }
        if(y+ey[i]>=0&&x+ex[i]>=0){
          mp[y+ey[i]][x+ex[i]]+=1;
        }
      }
    }
    else if(s==3){
      mp[y][x]+=1;
      rep(i,4){
        if(y+dy[i]>=0&&x+dx[i]>=0){
          mp[y+dy[i]][x+dx[i]]+=1;
        }
        if(y+ey[i]>=0&&x+ex[i]>=0){
          mp[y+ey[i]][x+ex[i]]+=1;
        }
        if(y+fy[i]>=0&&x+fx[i]>=0){
          mp[y+fy[i]][x+fx[i]]+=1;
        }
      }
    }
  }
  int ans1=0,ans2=0;
  rep(i,10){
    rep(j,10){
      if(mp[i][j]==0)ans1++;
      if(ans2<mp[i][j])ans2=mp[i][j];
    }
  }
  cout<<ans1<<endl;
  cout<<ans2<<endl;
  return 0;
}