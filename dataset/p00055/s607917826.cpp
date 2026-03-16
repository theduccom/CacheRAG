#include<iostream>
#include<cstdio>
using namespace std;
int main(){
  double a,s;
  while(cin>>a){
  s=a;
  for(int i=0;i<9;i++){
    if(i%2==0)a*=2;
    else a/=3;
    s+=a;
  }
  printf("%.10f\n",s);
  }  
return 0;
}