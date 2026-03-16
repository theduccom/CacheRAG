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
    rep(i,n){
      int m,e,j;
      cin>>m>>e>>j;
      if (m>=100||e>=100||j>=100||(m+e)>=2*90 ||m+e+j >= 3*80)cout << "A"<<endl;
      else if (m+e+j>= 3*70 || (m+e+j>=3*50 && (m>=80||e>=80)))cout <<"B"<<endl;
      else cout << "C" << endl;
    }
  }
}