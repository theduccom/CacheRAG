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
typedef complex<Real> P;
Real dot(P a,P b){return real(conj(a)*b);}
Real cross(P a,P b){return imag(conj(a)*b);}

bool e[52525];

int main(){
  float mxh=-1, mnh=1e18;
  float height;
  while(~scanf("%f",&height)){
    if(height==-1.f)break;
    mxh = max(mxh,height);
    mnh = min(mnh,height);
  }
  cout.precision(4);
  cout<<fixed<<(mxh-mnh)<<endl;
  return 0;
}