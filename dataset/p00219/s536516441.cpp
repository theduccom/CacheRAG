#include<iostream>
#include<algorithm>
using namespace std;
#define REP(i,b,n) for(int i=b;i<n;i++)
#define rep(i,n)   REP(i,0,n)
class state{
public:
  int p,d;
  bool operator<(const state & a)const{
    if (d != a.d)return d > a.d;
    return p < a.p;
  }
};

main(){
  int n;
  while(cin>>n&&n ){
    int a[10]={0};
    rep(i,n){
      int t;cin>>t;a[t]++;
    }
    rep(i,10){
      if (a[i]==0)cout <<'-';
      else rep(j,a[i])cout << '*';
      cout << endl;
    }


  }
}