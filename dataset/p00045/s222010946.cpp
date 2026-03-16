#include <stdio.h>
int main(){
    int temp,t,tot=0,ave=0,now=0;
    while(scanf("%d,%d",&temp,&t)!=EOF){
        if(temp==0)break;
        tot+=temp*t;
        ave+=t;
        now++;
    }
    printf("%d\n%d\n",tot,(int)((double)ave/now+0.5));
}