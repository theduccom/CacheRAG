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

double dot(P a,P b){return real(conj(a)*b);}
double cross(P a,P b){return imag(conj(a)*b);}

typedef long double Real;

int main(){
  int s;
  while(~scanf("%d",&s)){
    vi x;
    if(s>0)x.push_back(s);
    REPR(i,8){
      scanf("%d",&s);
      if(s>0)x.push_back(s);
    }
    if(x.size()==4){
      puts("B");
    }else if(x.size()==1){
      puts("C");
    }else{
      int a=0,b=0;
      while(x[0]%10==0){
        ++a;
        x[0]/=10;
      }
      while(x[1]%10==0){
        ++b;
        x[1]/=10;
      }
      if(x.size()==3){
        if(a==b){
          puts("D");
        }else{
          puts("F");
        }
      }else{
        if(a==b){
          puts("A");
        }else if(a>b){
          puts("E");
        }else{
          puts("G");
        }
      }
    }
  }
  return 0;
}