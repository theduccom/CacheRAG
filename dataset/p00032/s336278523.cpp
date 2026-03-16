#include<stdio.h>
int main(void){
int x,y,z,i,all,cou=0,cou2=0;
while(scanf("%d,%d,%d",&x,&y,&z)!=EOF){
    if(z*z==x*x+y*y)cou++;
    if(x==y)cou2++;
}
printf("%d\n%d\n",cou,cou2);
return 0;
}