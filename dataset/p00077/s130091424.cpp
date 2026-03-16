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
  string s;
  while(cin>>s){
    REP(i,s.size()){
      if(s[i]=='@'){
        int tmp=s[i+1]-'0';
        REP(j,tmp)cout<<s[i+2];
        i+=2;
      }else cout<<s[i];
    }
    cout<<endl;
  }
  return 0;
}

