#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{

int num[11]={};
int x,t,T=0;
double S1=0,S2=0,V1,V2,W;
bool f1=false,f2=false;
while(scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%lf,%lf",&num[0],&num[1],&num[2],&num[3],&num[4],&num[5],&num[6],&num[7],&num[8],&num[9],&V1,&V2)!=EOF){
/*
for(int i=1;i<10;i++)
{scanf("%d",&x);num[i]=x;}
cin>>V1>>V2;
*/W=0;S1=0;S2=0;
for(int i=0;i<10;i++)
S1+=num[i];
for(int i=0;i<10;i++)
S2=V1+V2;
t=0;T=0;
W=S1*V1/S2;
//cout<<S1<<" "<<S2<<" "<<W<<" ";
do{

T+=num[t];
if(T==W)f1=true;
t++;
}while(T<W);
if(f1==false)printf("%d\n",t);
else if(f1==true)printf("%d\n",t);
}
return 0;
}