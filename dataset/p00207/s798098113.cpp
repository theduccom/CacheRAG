#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <unordered_map>
#include <ctime>
#include <list>
#include <numeric>
#include <utility>
#include <ctime>
#define INF 100000000
#define LINF 9000000000000000000
#define mod 1000000007
 
#define rep(i,n) for(int i=0;i<int(n);i++)
#define REP(i,a,b) for(int i=(a);i<int(b);i++)
#define all(x) (x).begin(),x.end()
#define pb push_back
#define mp make_pair
#define MOD(x) (x%(mod))
 
using namespace std;
 
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int,int> pi;
 
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
bool debug=false;

/*---------------------------------------------------*/

int maze[105][105];
int w,h,xs,ys,xg,yg;

void init(){
  rep(i,105){
    rep(j,105){
      maze[i][j]=-1;
    }
  }
}

void DEBUG(){
  rep(i,h){
    rep(j,w)cout<<maze[i][j]<<" ";
    cout<<endl;
  }
}

bool bfs(int c){
  //DEBUG();
  queue<int>que;
  que.push(xs);
  que.push(ys);
  while(que.size()){
    //cout<<c<<endl;
    int x=que.front();que.pop();
    int y=que.front();que.pop();
    if(x==xg&&y==yg)return true;
    for(int i=0;i<4;i++){
      if(0<x+dx[i]&&x+dx[i]<=w&&0<y+dy[i]&&y+dy[i]<=h&&maze[y+dy[i]][x+dx[i]]==c&&maze[y+dy[i]][x+dx[i]]!=-1){
	que.push(x+dx[i]);
	que.push(y+dy[i]);
	maze[y+dy[i]][x+dx[i]]=-1;
      }
    }
  }
  return false;
}

int main(){
  int n,c,d,x,y;
  while(cin>>w>>h){
    if(w==0&&h==0)break;
    init();
    cin>>xs>>ys;
    cin>>xg>>yg;
    cin>>n;
    rep(i,n){
      cin>>c>>d>>x>>y;
      if(d==0){
	rep(j,2){
	  rep(k,4){
	    maze[y+j][x+k]=c;
	  }
	}
      }else if(d==1){
	rep(j,4){
	  rep(k,2){
	    maze[y+j][x+k]=c;
	  }
	}
      }
    }
    if(bfs(maze[ys][xs]))cout<<"OK"<<endl;
    else cout<<"NG"<<endl;
  }
  return 0;
}