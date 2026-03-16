#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int num[12][12]={};
	int N,x;
int a;
while(1)
{cin>>N;
if(N==0)break;
for(int i=0;i<N;i++){
for(int j=0;j<N;j++)
{cin>>num[i][j];num[i][N]+=num[i][j];}
}
for(int i=0;i<N;i++)
num[N][N]+=num[i][N];
for(int i=0;i<N;i++)
	for(int j=0;j<N;j++)
num[N][i]+=num[j][i];

for(int i=0;i<=N;i++){
for(int j=0;j<=N;j++)
{

	
/*if(num[i][j]==0)a==4;
else if(num[i][j]>0)a =5-( (int)log10((double)(num[i][j]) )+ 1);
else if(num[i][j]<0)a =4-( (int)log10((double)(-num[i][j]) )+ 1);
for(int k=0;k<a;k++)
{cout<<" ";}
*/
printf("%5d",num[i][j]);}
cout<<endl;


}

for(int i=0;i<=N;i++){
for(int j=0;j<=N;j++){
num[i][j]=0;
}
}


}

return 0;
}