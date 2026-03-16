#include<bits/stdc++.h>
#define REP(i,n) for(int i=0;i<n;i++)
#define LOOP(i,x,n) for(int i=x;i<n;i++)
#define ALL(v) (v).begin(),(v).end()
#define PB push_back
#define MP make_pair
#define FR first
#define SC second
#define int long long
using namespace std;
const int MOD=1000000007;
const int INF=9000000009;

signed main(){
  double v;
  while(cin>>v){
    double t=v/9.8;
    double y=4.9*pow(t,2);
    for(int i=1;;i++){
      int N=5*i-5;
      if(N>y){
        cout<<i<<endl;
        break;
      }
    }
  }
  return 0;
}

