#include <stdio.h>

int main(void){
  int d,w,h,t;
  int n;
  int r;

  while (scanf("%d%d%d", &d, &w, &h), d*w*h){
    //sort
    if (d>w){
      t=d;d=w;w=t;
    }
    if (w>h){
      t=w;w=h;h=t;
    }
    if (d>w){
      t=d;d=w;w=t;
    }

    scanf("%d", &n);
    for (int i=0; i<n; i++){
      scanf("%d",&r);
      if (d*d+w*w < 4*r*r){
	puts("OK");
      } else {
	puts("NA");
      }
    }
  }
  return 0;
}