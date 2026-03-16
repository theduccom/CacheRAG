#include <stdio.h>
#include <math.h>
int main(){
/*(^(^(^(^(^o^)^)^)^)^) &#9602;&#9605;&#9607;&#9608;&#9619;&#9618;&#9617;('ω')&#9617;&#9618;&#9619;&#9608;&#9607;&#9605;&#9602; */
int a,b,s=0,sum=0;
double av=0;
while(scanf("%d,%d",&a,&b)!=EOF){
sum+=a*b;
av+=b;
s++;
}
av/=s;
int aa;
if(av-floor(av)<0.5){
aa=floor(av);
}else{
aa=ceil(av);
}
printf("%d\n%d\n",sum,aa);
return 0;
}