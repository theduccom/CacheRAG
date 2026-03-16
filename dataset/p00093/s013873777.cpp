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
#define EPS 1e-13
#define EQ(x) (-EPS<x && x<EPS)
typedef complex<Real> P;
Real dot(P a,P b){return real(conj(a)*b);}
Real cross(P a,P b){return imag(conj(a)*b);}

int main(){
  bool flag = true;
  vi leap;
  REP(i,3535){
    if(i%4==0 && (i%100!=0 || i%400==0))leap.push_back(i);
  }
  while(true){
    int a,b;
    cin>>a>>b;
    if(!a && !b)break;
    if(flag){
      flag = false;
    }else{
      cout<<endl;
    }
    int left = lower_bound(ALL(leap),a) - leap.begin();
    int right = upper_bound(ALL(leap),b) - 1 - leap.begin();
    if(left > right){
      cout<<"NA"<<endl;
    }else{
      FOR(i,left,right+1)cout<<leap[i]<<endl;
    }
  }
  return 0;
}