#include<iostream>
#include<cmath>
#define REP(i,s,n) for(int i=0;i<n;i++)
#define rep(i,n) REP(i,0,n)
using namespace  std;

int main(){
  long double n;
  // cout << n*n/19.6<<endl;
  // cout << int(35.0+1.2)<<endl;
  while (cin>>n){
    cout <<int(n*n/19.6/5+2) << endl;
  }
  return 0;
}

