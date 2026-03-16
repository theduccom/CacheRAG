#include<stdio.h>
#include<string>
#include<iostream>
using namespace std;

struct BK{string st;int p;};
int main(){
string str;
int N,iii=0;
BK B[101],T;
while(cin>>str>>N){
B[iii].st=str;B[iii].p=N;
iii++;
}
for(int i=0;i<iii;i++)
for(int j=iii-1;j>i;j--)
if(B[j].st<B[j-1].st){T=B[j-1];B[j-1]=B[j];B[j]=T;}

for(int i=0;i<iii;i++)
for(int j=iii-1;j>i;j--)
if(B[j].st==B[j-1].st&&B[j].p<B[j-1].p){T=B[j-1];B[j-1]=B[j];B[j]=T;}

for(int i=0;i<iii;i++)
{if(i==0)cout<<B[0].st<<endl<<B[0].p;
else if(i>0&&B[i].st==B[i-1].st){cout<<" "<<B[i].p;}
else cout<<endl<<B[i].st<<endl<<B[i].p;
}
cout<<endl;
return 0;
}