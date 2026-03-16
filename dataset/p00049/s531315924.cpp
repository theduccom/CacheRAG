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
  int a=0,b=0,o=0,ab=0;
  int x;
  char s[3];
  while(~scanf("%d,%s",&x,s)){
    if(s[0]=='A'){
      if(s[1]=='B')++ab;
      else ++a;
    }else if(s[0]=='B') ++b;
    else ++o;
  }
  cout<<a<<endl;
  cout<<b<<endl;
  cout<<ab<<endl;
  cout<<o<<endl;
  return 0;
}