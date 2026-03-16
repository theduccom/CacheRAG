#include<stdio.h>
int main(){
int W,T=4280;
int d=0,x=0;
while(1){
scanf("%d",&W);if(W==-1)break;
T=T-1150;
if(W<=10){printf("%d\n",T);}
else if(W<=20){d=125*(W-10);T=T-d;printf("%d\n",T);}
else if(W<=30){d=140*(W-20);T=T-d-1250;printf("%d\n",T);}
else if(W>30){d=160*(W-30);T=T-d-1250-1400;printf("%d\n",T);}
T=4280;
}
return 0;
}