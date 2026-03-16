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
    int num,dist=0;
    rep(i,n){
      int a,b,c;
      cin>>a>>b>>c;
      if (b+c > dist)dist=b+c,num=a;
    }
    cout <<num <<" " << dist << endl;
  }
}