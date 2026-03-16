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

string s;
int iter;

ll dfs();

ll dfs2(ll val,int op){
  ll tmp = 0;
  while(true){
    if('0'<=s[iter]&&s[iter]<='9'){
      tmp *= 10;
      tmp += s[iter]-'0';
    }else if(s[iter]=='('){
      ++iter;
      tmp = dfs();
    }else if(s[iter]==')' || s[iter]=='=' || s[iter]=='+' || s[iter]=='-'){
      if(op) val *= tmp;
      else val /= tmp;
      --iter;
      return val;
    }else if(s[iter]=='*' || s[iter]=='/'){
      if(op) val *= tmp;
      else val /= tmp;
      op = s[iter]=='*'?1:0;
      tmp = 0;
    }
    if(iter>=s.size()){
      --iter;--iter;
      return val;
    }
    ++iter;
  }
}

ll dfs(){
  ll val = 0;
  ll tmp = 0;
  int op = 1; // op==1?'+':'-'
  while(true){
    if('0'<=s[iter]&&s[iter]<='9'){
      tmp *= 10;
      tmp += s[iter]-'0';
    }else if(s[iter]=='('){
      ++iter;
      tmp = dfs();
    }else if(s[iter]==')' || s[iter]=='='){
      val += op*tmp;
      tmp = 0;
      return val;
    }else if(s[iter]=='+'){
      val += op*tmp;
      tmp = 0;
      op = 1;
    }else if(s[iter]=='-'){
      val += op*tmp;
      tmp = 0;
      op = -1;
    }else if(s[iter]=='*' || s[iter]=='/'){
      ++iter;
      val += op*dfs2(tmp,s[iter-1]=='*'?1:0);
      tmp = 0;
    }
    if(iter>=s.size()){
      --iter;--iter;
      return val;
    }
    ++iter;
  }
}

int main(){
  int n;
  cin>>n;
  while(n--){
    cin>>s;
    iter = 0;
    cout<<dfs()<<endl;
  }
  return 0;
}