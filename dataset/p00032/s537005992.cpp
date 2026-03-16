#include <stdio.h>
int main(){
int a,b,c,ans=0,t=0;
while(scanf("%d,%d,%d",&a,&b,&c)!=EOF){
if(a*a+b*b==c*c)ans++;
if(a==b)t++;
}
printf("%d\n%d\n",ans,t);
}