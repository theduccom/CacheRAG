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

int main(){
  int cnt = 0;
  P a,b,c;
  float x,y;
  Real s = 0;
  while(~scanf("%f,%f",&x,&y)){
    if(x==1145141919)break;
    if(cnt==0) a=P(x,y);
    else if(cnt==1) b=P(x,y);
    else{
      c=P(x,y);
      s += abs(cross(b-a,c-a))/2.0;
      b=c;
    }
    ++cnt;
  }
  cout.precision(12);
  cout<<fixed<<s<<endl;
  return 0;
}