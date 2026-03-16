#include<stdio.h>
#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;

int main(){
int N,m=0,rn=0,pn=0;
string str;
cin>>N;
for(int i=0;i<N;i++)
{
while(1){
cin>>str;
if(str=="OUT"){m++;
if(m==3)break;}
if(str=="HIT"){rn++;
if(rn==4){pn++;rn=3;}}
if(str=="HOMERUN"){
pn+=rn+1;rn=0;}
}
cout<<pn<<endl;
rn=0;pn=0;m=0;
}
return 0;
}