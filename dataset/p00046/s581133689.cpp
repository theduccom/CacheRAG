#include <stdio.h>
int main(){
double top,bot,temp;
scanf("%lf",&top);
bot=top;
while(scanf("%lf",&temp)!=EOF){
if(temp>top)top=temp;
if(temp<bot)bot=temp;
}
printf("%lf\n",top-bot);
}