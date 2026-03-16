#include<iostream>
#include<cstdio>
using namespace std;


double solve(double a){
  double ans=0;
  for(int i=0;i<10;i++){
    ans+=a;
    if(i%2==1){
      a/=3.0;
    }else{ 
      a*=2.0;
    }
  }
  return ans;
}

int main(){
  double a;
  while(cin>>a){
    printf("%.20lf\n",solve(a));
  }
}