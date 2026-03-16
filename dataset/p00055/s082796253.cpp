#include<bits/stdc++.h>
using namespace std;

int main(){
  double a;
  while(cin>>a){
    double ans=a;
    for(int i=2; i<=10; i++){
      if(i%2==0){
        ans+=(a*=2.0);
      }
      else{
        ans+=(a/=3.0);
      }
    }
    printf("%.10f\n", ans);
  }
  return 0;
}