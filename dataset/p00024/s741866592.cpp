#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef complex<double> P;
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

int main(){
  double len;
  while(~scanf("%lf",&len)){
    ll left = -1, right = 1e18;
    while(left+1<right){
      ll mid = (left+right)/2;
      double height = 5*mid - 5;
      double t = sqrt(height/4.9);
      double v = 9.8*t;
      if(v>=len){
        right = mid;
      }else{
        left = mid;
      }
    }
    cout<<right<<endl;
  }
  return 0;
}