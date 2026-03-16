#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define loop(i,x,n) for(int i=(x);i<(n);i++)
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define mp make_pair
#define fir first
#define sec second
#define ub upper_bound
#define lb lower_bound
#define int long long
using namespace std;
const int MOD=1000000007;
const int INF=1000000009;


signed main(){
  int n;
  cin>>n;
  rep(i,n){
    int out=0,point=0;
    int run[3]={};
    string s;
    int F=0,S=0,T=0;
    while(out!=3){
      cin>>s;
      if(s=="OUT")out++;
      else if(s=="HOMERUN"){
        rep(i,3){
          point+=run[i];
          run[i]=0;
        }
        point++;
      }else{
        if(run[2]==1)point++;
        for(int i=2;i>0;i--)run[i]=run[i-1];
        run[0]=1;
      }
    }
    cout<<point<<endl;
  }
  return 0;
}