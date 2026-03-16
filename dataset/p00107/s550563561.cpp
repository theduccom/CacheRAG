#include<bits/stdc++.h>
using namespace std;
int main(){
  double a[3];
  while(cin>>a[0]>>a[1]>>a[2],a[2]){
    int n;
    sort(a,a+3);
    double m=sqrt(a[1]*a[1]+a[0]*a[0]);
    cin>>n;
    while(n--){
      double p;
      cin>>p;
      if(p*2>m)cout<<"OK"<<endl;
      else cout<<"NA"<<endl;
    }
  }
}