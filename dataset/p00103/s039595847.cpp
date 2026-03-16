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

int main(){
  int n;
  cin>>n;
  while(n--){
    int score = 0;
    int out = 0;
    bool r1,r2,r3;
    r1=r2=r3=false;
    while(true){
      string s;
      cin>>s;
      if(s=="HIT"){
        if(r3)r3=false,++score;
        if(r2)r2=false,r3=true;
        if(r1)r1=false,r2=true;
        r1=true;
      }else if(s=="HOMERUN"){
        score += r1;
        score += r2;
        score += r3;
        score += 1;
        r1=r2=r3=false;
      }else if(s=="OUT"){
        ++out;
        if(out==3)break;
      }
    }
    cout<<score<<endl;
  }
  return 0;
}