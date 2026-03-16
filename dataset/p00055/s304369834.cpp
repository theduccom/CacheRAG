#include <stdio.h>
#include<math.h>
#include <string.h>
#include <ctype.h>

int main(){
double a[11],s;
int i;

while(scanf("%lf",&a[1])!=EOF){
s=0;
for(i=2;i<11;i++){
if(i%2==0){
a[i]=a[i-1]*2;
}
else if(i%2==1){
a[i]=a[i-1]/3;
}
}
for(i=1;i<11;i++){
s+=a[i];
}
printf("%f\n",s);
}

return 0;
}