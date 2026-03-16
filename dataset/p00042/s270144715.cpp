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

int main(){
  int cnt = 1;
  while(true){
    int w;
    cin>>w;
    if(w==0)break;
    int n;
    cin>>n;
    vi dp(w+1,-INF);
    dp[0] = 0;
    REP(_,n){
      int val,wei;
      scanf("%d,%d",&val,&wei);
      for(int i=w;i>=0;--i){
        if(i-wei<0)break;
        dp[i] = max(dp[i],dp[i-wei]+val);
      }
    }
    int mxval = 0, thenwei = 0;
    REPR(i,w+1){
      if(dp[i]>mxval){
        mxval = dp[i];
        thenwei = i;
      }
    }
    printf("Case %d:\n",cnt);
    cout<<mxval<<endl<<thenwei<<endl;
    ++cnt;
  }
  return 0;
}