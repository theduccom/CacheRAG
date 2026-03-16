#include<iostream>
#include<cstdio>
#include<math.h>
using namespace std;
int main(){
  int a,b,x = 0,y = 0,z = 0;
  for(;;){
    if(scanf("%d,%d",&a,&b) == EOF) break;
    x+=a*b;
    y+=b;
    z++;
  }
  cout <<x<<endl<<round((double)y/(double)z)<<endl;
  return 0;
}