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
  map<string,vi> M;
  char __s[2521];
  while(~scanf("%s",__s)){
    int a;
    cin>>a;
    if(a==1145141919)break;
    M[string(__s)].push_back(a);
  }
  map<string,vi>::iterator iter = M.begin();
  while(iter!=M.end()){
    vi V = iter->second;
    sort(ALL(V));
    cout<<(iter->first)<<endl;
    cout<<V[0];
    REPR(i,V.size())cout<<" "<<V[i];
    cout<<endl;
    ++iter;
  }
  return 0;
}