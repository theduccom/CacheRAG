#include <bits/stdc++.h>
#define log(x) cout<<x<<endl
#define pb push_back
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
typedef long long lint;
using namespace std;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const long long INF = 1LL << 60;
using Graph=vector<vector<int>>;

int main(){
  vector<int> l;
  for(int i=0;i<220;i++){
    int n;cin>>n;
    int sum=1150;
    if(n==-1) break;
    if(n>30){
      int t=n-30;
      sum+=t*160;
      n-=t;
    }
    if(n>20){
      int t=n-20;
      sum+=t*140;
      n-=t;
    }
    if(n>10){
      int t=n-10;
      sum+=t*125;
      n-=t;
    }
    int resu=4280-sum;
    l.pb(resu);
  }
  for(int i=0;i<l.size();i++){
    cout<<l[i]<<endl;
  }
}
