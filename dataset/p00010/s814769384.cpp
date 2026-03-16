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
  int n;
  cin>>n;
  while(n--){
    double ax,bx,cx,ay,by,cy;
    cin>>ax>>ay>>bx>>by>>cx>>cy;
    P a(ax,ay),b(bx,by),c(cx,cy);
    double i,j,k;
    i = abs(b-c);
    j = abs(c-a);
    k = abs(a-b);
    double r = i*j*k/sqrt( (i+j+k)*(-i+j+k)*(i-j+k)*(i+j-k) );
    double ii = i*i, jj=j*j,kk=k*k;
    double s = imag(conj(b-a)*(c-a))/2.0;
    P p = (ii*(jj+kk-ii)*a + jj*(kk+ii-jj)*b + kk*(ii+jj-kk)*c) / (16.0*s*s);
    printf("%.3lf %.3lf %.3lf\n",p.real()+0.0, p.imag()+0.0, r);
  }
  return 0;
}