#include<stdio.h>
#include<math.h>

int main(){
  while(1){
    int d, w, h;
    scanf("%d %d %d", &d, &w, &h);
    if(d==0 && w==0 && h==0)
      break;
    int n;
    scanf("%d", &n);
    
    int max = (int)fmax((double)d, fmax((double)w, (double)h));
    double a = sqrt(d*d+w*w+h*h-max*max) / 2;

    int i;
    for(i=0;i<n;i++){
      int b;
      scanf("%d", &b);
      //printf("a:%lf b:%d", a, b);
      if((double)b <= a)
	printf("NA\n");
      else
	printf("OK\n");
    }
  }
  return 0;
}