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

typedef long double Real;
#define EPS 1e-13
#define EQ(x) (-EPS<x && x<EPS)
typedef complex<Real> P;
Real dot(P a,P b){return real(conj(a)*b);}
Real cross(P a,P b){return imag(conj(a)*b);}

#define MP make_pair<int,int>

int mp[830][252];
bool vstd[830][252];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
int dw[255];

int main(){
  dw['.'] = -1;
  dw['>'] = 0;
  dw['<'] = 2;
  dw['v'] = 1;
  dw['^'] = 3;
  while(true){
    int h,w;
    cin>>h>>w;
    if(!(h+w))break;
    REP(i,h)REP(j,w)vstd[i][j] = false;
    REP(i,h){
      string s;
      cin>>s;
      REP(j,w) mp[i][j] = dw[s[j]];
    }
    int x,y;
    x=y=0;
    while(mp[y][x]!=-1){
      if(vstd[y][x]){
        x=y=-1;
        break;
      }
      vstd[y][x] = true;
      int c = mp[y][x];
      x += dx[c];
      y += dy[c];
    }
    if(x==-1){
      cout<<"LOOP"<<endl;
    }else{
      printf("%d %d\n",x,y);
    }
  }
  return 0;
}