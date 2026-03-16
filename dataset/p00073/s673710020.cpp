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
  cout.precision(12);
  while(true){
    double x,h;
    cin>>x>>h;
    if(x==0 && h==0)break;
    double s;
    double po = x*sqrt(2.0)/2.0;
    double bo = sqrt(h*h + po*po);
    double co = x/2.0/bo;
    double si = sqrt(1.0-co*co);
    double ho = si*bo;
    s = ho*x/2.0;
    s *= 4.0;
    s += x*x;
    cout<<fixed<<s<<endl;
  }
  return 0;
}