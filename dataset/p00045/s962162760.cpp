#include<iostream>
#include<cstdio>
using namespace std;
int main(){
  int s=0,t=0,n=0;
  for(int a,b;;n++){
    if(scanf("%d,%d",&a,&b) == EOF) break;
    s+=a*b;
    t+=b;
  }
  if(((t*10)/n)%10>4) t = t/n+1;
  else t/=n;
  cout <<s<<endl<<t<<endl;
  return 0;
}