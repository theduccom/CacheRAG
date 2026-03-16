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
  int a[5];
  while(~scanf("%d,%d,%d,%d,%d",a,a+1,a+2,a+3,a+4)){
    sort(a,a+5);
    if(a[1]==a[2] && a[2]==a[3] && (a[0]==a[1] || a[3]==a[4])){
      cout<<"four card"<<endl;
    }else if(a[0]==a[1] && a[3]==a[4] && (a[1]==a[2] || a[2]==a[3])){
      cout<<"full house"<<endl;
    }else if((a[0]+1==a[1] && a[1]+1==a[2] && a[2]+1==a[3] && a[3]+1==a[4]) ||
             (a[0]==1 && a[1]==10 && a[2]==11 && a[3]==12 && a[4]==13)){
      cout<<"straight"<<endl;
    }else if((a[0]==a[1] && a[1]==a[2]) || (a[1]==a[2] && a[2]==a[3]) || (a[2]==a[3] && a[3]==a[4])){
      cout<<"three card"<<endl;
    }else if((a[0]==a[1] && (a[2]==a[3] || a[3]==a[4]) || (a[1]==a[2] && a[3]==a[4]))){
      cout<<"two pair"<<endl;
    }else if(a[0]==a[1] || a[1]==a[2] || a[2]==a[3] || a[3]==a[4]){
      cout<<"one pair"<<endl;
    }else{
      cout<<"null"<<endl;
    }
  }
  return 0;
}