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

bool era[252525];

int main(){
  REP(i,252525)era[i]=true;
  era[0]=false;
  era[1]=false;
  vi ps(10000);
  int psiter = 0;
  FOR(i,2,252525){
    if(!era[i])continue;
    ps[psiter] = i;
    psiter++;
    if(psiter==10000)break;
    int iter = 2*i;
    while(iter < 252525){
      era[iter] = false;
      iter += i;
    }
  }
  vi sum(10000);
  REP(i,10000)sum[i]=ps[i];
  REPR(i,10000)sum[i]+=sum[i-1];
  while(true){
    int n;
    cin>>n;
    if(n==0)break;
    cout<<sum[n-1]<<endl;
  }
  return 0;
}