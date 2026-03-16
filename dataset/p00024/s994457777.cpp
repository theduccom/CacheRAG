#include<cstdio>
int main(){
  double v,t,y,i;
  while(scanf("%lf",&v)!=EOF){
    t = v/9.8;
    y = 4.9*t*t;
    for(i=0;i*5<y;i++);
    printf("%.0lf\n",i+1);
  }
  return(0);
}

