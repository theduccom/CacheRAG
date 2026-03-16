#include <stdio.h>
int main(){
int n,temp;
bool f;
while(scanf("%d",&n)!=EOF){
temp=1;
f=true;
while(f){
if(n%(temp*2)!=0){
printf("%d",temp);
n-=temp;
f=false;
}
temp*=2;
}
while(n>0){
if(n%(temp*2)!=0){
printf(" %d",temp);
n-=temp;
}
temp*=2;
}
printf("\n");
}
}