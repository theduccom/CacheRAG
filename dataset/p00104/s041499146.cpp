#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define loop(i,x,n) for(int i=(x);i<(n);i++)
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define mp make_pair
#define fir first
#define sec second
#define ub upper_bound
#define lb lower_bound
#define int long long
using namespace std;
const int MOD=1000000007;
const int INF=1000000009;

int h,w;

char M[101][101];

pair<int,int> f(int y,int x){
  pair<int,int> p;
  if(M[y][x]=='.'){
    p=mp(y,x);
    return p;
  }
  if(M[y][x]=='#'){
    p=mp(-1,-1);
    return p;
  }
  if(M[y][x]=='>'){
    M[y][x]='#';
    f(y,x+1);
  }else if(M[y][x]=='^'){
    M[y][x]='#';
    f(y-1,x);
  }else if(M[y][x]=='<'){
    M[y][x]='#';
    f(y,x-1);
  }else if(M[y][x]=='v'){
    M[y][x]='#';
    f(y+1,x);
  }
}

signed main(){
  while(cin>>h>>w,h){
    rep(i,h)rep(j,w)cin>>M[i][j];
    pair<int,int> P=f(0,0);
    if(P.fir==-1&&P.sec==-1){
      cout<<"LOOP"<<endl;
    }else{
      cout<<P.sec<<' '<<P.fir<<endl;
    }
  }
  return 0;
}