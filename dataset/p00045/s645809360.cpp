#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
  int s,c,n=0,gs=0,gc=0;
  double hc;
  while(scanf("%d,%d",&s,&c)!=EOF) {
	  gs+=s*c; gc+=c; n++;
  }
  printf("%d\n",gs);
  hc=0.5+(double)gc/n;
  printf("%d\n",(int)hc);
  return 0;
}