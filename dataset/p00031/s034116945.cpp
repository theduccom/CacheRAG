#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
bool f=false;
int num[10]={};
int N,cou=0,jj=0,sum=0;
while(scanf("%d",&N)!=EOF)
{
	jj=0;cou=0;sum=0;f=false;
do{
num[jj]=N%2;cou++;jj++;
N=N/2;
}while(N!=0);
for(int i=0;i<cou;i++)
{
if(num[i]==1){
	
	sum=pow( 2, (double) (i) );
	if(f==true)cout<<" ";
	cout<<sum;f=true;
}
}
cout<<endl;
}
return 0;
}