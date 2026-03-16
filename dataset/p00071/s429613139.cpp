#include <bits/stdc++.h>
  
using namespace std;
  
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pii;
#define REP(i,n) for(ll i=0;i<n;++i)
#define REPR(i,n) for(ll i=1;i<n;++i)
#define FOR(i,a,b) for(ll i=a;i<b;++i)
  
#define DEBUG(x) cout<<#x<<": "<<x<<endl
#define DEBUG_VEC(v) cout<<#v<<":";REP(i,v.size())cout<<" "<<v[i];cout<<endl
#define ALL(a) (a).begin(),(a).end()
  
#define MOD (ll)(1e9+7)
#define ADD(a,b) a=((a)+(b))%MOD
#define FIX(a) ((a)%MOD+MOD)%MOD

#define INF 1000000000

typedef long double Real;
#define EPS 1e-11
#define EQ(x) (-EPS<x && x<EPS)
typedef complex<Real> P;
Real dot(P a,P b){return real(conj(a)*b);}
Real cross(P a,P b){return imag(conj(a)*b);}

int mp[8][8];

void dfs(int y,int x){
  if(y<0 || y>=8 || x<0 || x>=8)return;
  if(mp[y][x]==0)return;
  mp[y][x] = 0;
  REP(i,7)dfs(y,x-3+i);
  REP(i,7)dfs(y-3+i,x);
}

int main(){
  int t;
  cin>>t;
  REP(_,t){
    REP(i,8){
      int x;
      cin>>x;
      REP(j,8){
        mp[i][7-j] = x%10;
        x/=10;
      }
    }
    int x,y;
    cin>>x>>y;
    --x;--y;
    dfs(y,x);
    cout<<"Data "<<(_+1)<<":"<<endl;
    REP(i,8){
      REP(j,8)cout<<mp[i][j];
      cout<<endl;
    }
  }
  return 0;
}