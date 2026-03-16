#include <bits/stdc++.h>
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
const int INF=1000000009;


signed main(){
  int n;
  while(cin>>n){
    vector<int> x={1,2,4,8,16,32,64,128,256,512};
    vector<int> ans;
    while(n){
      int tmp;
      for(int i=0;i<10;i++){
        if(n>=x[i])tmp=x[i];
      }
      n-=tmp;
      ans.PB(tmp);
    }
    for(int i=ans.size()-1;i>=0;i--){
      cout<<ans[i];
      if(i!=0)cout<<' ';
    }
    cout<<endl;
  }
  return 0;
}

