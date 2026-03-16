#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

int main(){

  int a,b,c;
  
  while(1){

    int n;
    int d;
  
    scanf("%d %d %d",&a,&b,&c);
    if(a==0 && b==0 && c==0) break;
    scanf("%d",&n);
    
    d = min(a*a+b*b , min(a*a+c*c , b*b+c*c));
    
    for(int i=0;i<n;i++){
      int r;
      int f=1;
      
      scanf("%d",&r);
      r = (2*r)*(2*r);
      if(r<=d) f=0;

      //printf("%d %d ",r,d);
      
      if(f) printf("OK\n");
      else printf("NA\n");
    }


  }
  return 0;
}