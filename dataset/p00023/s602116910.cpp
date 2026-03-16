#include<bits/stdc++.h>
#define y imag()
#define x real()
using namespace std;
typedef complex<double> P;

int main(){
  int n;
  P a,b;
  double ra,rb,d;
  cin>>n;
  while(n--){
    cin>>a.x>>a.y>>ra;
    cin>>b.x>>b.y>>rb;
    double A=a.x-b.x;
    double B=a.y-b.y;
    d=sqrt(A*A+B*B);
    if(d>ra+rb)cout<<0<<endl;
    else if(d+ra<rb)cout<<-2<<endl;
    else if(d+rb<ra)cout<<2<<endl;
    else cout<<1<<endl;
  }
  return 0;
}