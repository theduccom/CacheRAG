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
  int a,b;
  int f=0;
  while(cin>>a>>b,a){
    if(f)cout<<endl;
    f=1;
    vector<int> y;
    for(int i=a;i<=b;i++){
      if(i%4==0){
        if(i%100!=0){
          y.PB(i);
          continue;
        }
        if(i%400==0)y.PB(i);
      }
    }
    if(y.size()==0){
      cout<<"NA"<<endl;
    }else{
      for(auto x:y)cout<<x<<endl;
    }
  }
  return 0;
}

