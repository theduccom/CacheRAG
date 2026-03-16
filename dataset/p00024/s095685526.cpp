#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
  int nr;
  double v,n;
  while(scanf("%lf",&v)!=EOF){
    n=(v*v+98)/98;
    nr=n;
    if(n-nr>0) cout << nr+1 << endl;
    else cout << nr << endl;
  }
  return 0;
}