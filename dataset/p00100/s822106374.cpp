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

ll score[4001];

int main(){
  while(true){
    int n;
    cin>>n;
    if(!n)break;
    REP(i,4001)score[i]=0;
    bool flag = true;
    REP(i,n){
      int id;
      ll val,num;
      cin>>id>>val>>num;
      score[id] += val*num;
      if(score[id]>=1000000ll){
        flag = false;
        cout<<id<<endl;
        score[id] = -1145141919810931;
      }
    }
    if(flag)cout<<"NA"<<endl;
  }
  return 0;
}