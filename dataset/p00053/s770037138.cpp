#include<bits/stdc++.h>
#define REP(i,n) for(int i=0;i<n;i++)
#define LOOP(i,x,n) for(int i=x;i<n;i++)
#define ALL(v) (v).begin(),(v).end()
#define PB push_back
#define MP make_pair
#define FIR first
#define SEC second
#define int long long
using namespace std;
const int MOD=1000000007;
const int INF=1000000009;

bool Is_Prime(int n){
  if(n==1) return false;
  for(int i=2;i*i<=n;i++){
    if(n%i==0){
      return false;
    }
  }
  return true;
}
vector<int> p;
signed main(){
  LOOP(i,1,1000006)if(Is_Prime(i))p.PB(i);
  int n;
  while(cin>>n,n){
    int ans=0;
    REP(i,n)ans+=p[i];
    cout<<ans<<endl;
  }
  return 0;
}