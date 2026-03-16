#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
int n[6];
int c=0,cc=0;
bool f=true;
while(scanf("%d,%d,%d,%d,%d",&n[0],&n[1],&n[2],&n[3],&n[4])!=EOF){
for(int i=0;i<5;i++)
for(int j=4;j>i;j--)
if(n[j-1]>n[j]){int t=n[j];n[j]=n[j-1];n[j-1]=t;}

for(int i=0;i<4;i++){
if(n[i]==n[i+1])c++;
else if(c>=1){cc=c;c=0;}
else {c=0;}
}

for(int i=0;i<4;i++){
if(n[i+1]!=(n[i]+1))f=false;
}
if(n[0]==1&&n[1]==10&&n[2]==11&&n[3]==12&&n[4]==13)f=true;





if(c>=3||cc>=3)printf("four card\n");
else if(c==2&&cc==1)printf("full house\n");
else if(c==1&&cc==2)printf("full house\n");
else if(f==true)printf("straight\n");
else if(c==2||cc==2)printf("three card\n");
else if(n[0]==n[1]&&n[2]==n[3])printf("two pair\n");
else if(n[0]==n[1]&&n[3]==n[4])printf("two pair\n");
else if(n[1]==n[2]&&n[3]==n[4])printf("two pair\n");
else if(n[0]==n[1]||n[2]==n[3]||n[1]==n[2]||n[3]==n[4])printf("one pair\n");
else printf("null\n");

c=0,cc=0;f=true;
}
return 0;
}