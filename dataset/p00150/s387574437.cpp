#include<stdio.h>

bool f[10003];

bool f2[10003];


int main(){

for(int i=0;i<10002;i++)
for(int j=2;j*j<=i;j++)
{if(i%j!=0)f[i]=true;
else{ f[i]=false;break;}
}
f[3]=true;f[5]=true;

for(int i=0;i<10002;i++) 
if(f[i]==true&&f[i+2]==true)f2[i]=true;
f2[5]=true;
int n;
while(1){
scanf("%d",&n);if(n==0)break;
int p=0,q=0;
for(int i=n-2;i>=5;i--)
if(f2[i]==true){q=i+2;p=i;break;}
if(n<=6){p=3;q=5;}
printf("%d %d\n",p,q);
}
return 0;
}