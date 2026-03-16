#include <stdio.h>
 
int main(void){
int sum=0;
double mean=0;
int x,y;
int i=0;
while(scanf("%d,%d",&x,&y)!=EOF){
sum+=x*y;
mean+=y;
i++;
}
printf("%d\n%d\n",sum,(int)(mean/(double)(i)+0.5));
return 0;
}