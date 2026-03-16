#include<iostream>
#include<cstdio>
using namespace std;
int main(){
  double x,s;
  while(cin>>x){
    s=x;
    for(int i=0;;i++){
      x*=2;
      s+=x;
      if (i==4)break;
      x/=3;
      s+=x;
    }
    printf("%.8f\n",s);
  }
}