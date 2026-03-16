#include<iostream>
#include<cmath>
#define REP(i,s,n) for(int i=0;i<n;i++)
#define rep(i,n) REP(i,0,n)
using namespace  std;

int main(){
  int n; cin >> n;
  // cout << n;
  // double c; cin >> c;
  // cout << c;
  double xa, ya, ra, xb, yb, rb;
  rep(i,n){
    cin >> xa >> ya >> ra >> xb >> yb >> rb;
    // cout << xa << ya << ra << xb << yb << rb;
    double rd2 = sqrt(pow((xa-xb),2) +pow((ya-yb), 2));
    if(ra+rb<rd2) cout<<0<<endl;
    else if(ra>rb+rd2) cout<<2<<endl;
    else if(rb>ra+rd2) cout<<-2<<endl;
    else cout<<1<<endl;
  }
  return 0;
}
