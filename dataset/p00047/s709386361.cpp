#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){
  int a,b,c;
  a=1;
  b=c=0;

  char d,e;
  while(scanf(" %c,%c",&d,&e) != EOF){
    if(d=='A'){
      if(e=='B') swap(a,b);
      else if(e=='C') swap(a,c);
    }else if(d=='B'){
      if(e=='A') swap(b,a);
      else if(e=='C') swap(b,c);
    }else{
      if(e=='A') swap(c,a);
      else if(e=='B') swap(c,b);
    }
  }

  if(a) printf("A\n");
  else if(b) printf("B\n");
  else printf("C\n");

  return 0;

  
  
}