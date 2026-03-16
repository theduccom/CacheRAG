#include <stdio.h>
#include<math.h>
#include <string.h>
#include <ctype.h>

int main(){
char moji[102];
int i,n,t,f;

f=0;
while(scanf("%s",moji)!=EOF){
t=0;
n=strlen(moji);
for(i=0;i<n/2;i++){
if(moji[i]!=moji[n-1-i]){
t=1;
break;
}
}
if(t==0){
f++;
}
}
printf("%d\n",f);
return 0;
}