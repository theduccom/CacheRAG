#include<stdio.h>

int main(){
char x,y,T='A',tmp;
while(scanf("%c,%c",&x,&y)!=EOF){
if(x==T)T=y;
else if(y==T)T=x;
}
printf("%c\n",T);
return 0;
}