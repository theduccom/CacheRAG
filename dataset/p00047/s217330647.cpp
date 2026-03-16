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
  int a[3];
  a[0]=1;
  a[1]=0;
  a[2]=0;
  char s[3];
  while(~scanf("%s",s)){
    if(s[0]=='Z')break;
    int xx = s[0]-'A';
    int yy = s[2]-'A';
    swap(a[xx],a[yy]);
  }
  if(a[0])cout<<"A"<<endl;
  else if(a[1])cout<<"B"<<endl;
  else cout<<"C"<<endl;
  return 0;
}