

#include<stdio.h>

int main(){

int n[11]={};
int N,x;
while(1){
scanf("%d",&N);if(N==0)break;

for(int i=0;i<N;i++)
{
scanf("%d",&x);
n[x]++;
}

for(int i=0;i<10;i++)
{
if(n[i]>0){
for(int j=0;j<n[i];j++)
printf("*");}
else if(n[i]==0)printf("-");
printf("\n");
}

for(int i=0;i<10;i++)
	n[i]=0;
}
return 0;
}