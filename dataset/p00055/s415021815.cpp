#include<stdio.h>

int main(){

double x,y,S=0;

while(scanf("%lf",&x)!=EOF){
y=x;S=x;
for(int i=2;i<=10;i++){
if(i%2==0){x=y*2;S+=x;y=x;}
else {x=y/3;S+=x;y=x;}
}
printf("%lf\n",S);
}
return 0;
}