#include<iostream>
#include<string>
using namespace std;

int main(){
int c[6],s[6],ans=0;
string a[7];
a[0]="null";
a[1]="one pair";
a[2]="two pair";
a[3]="three card";
a[4]="straight";
a[5]="full house";
a[6]="four card";
while(scanf("%d,%d,%d,%d,%d",&c[0],&c[1],&c[2],&c[3],&c[4])!=EOF){
ans=0;
for(int i=0;i<5;i++)s[i]=100;
s[0]=c[0];
for(int i=1;i<5;i++){
for(int j=i-1;j>-1;j--){
if(s[j]<=c[i]){
for(int k=i;k>j+1;k--)s[k]=s[k-1];
s[j+1]=c[i];
break;}}
if(s[0]>c[i]){
for(int k=i;k>0;k--)s[k]=s[k-1];
s[0]=c[i];}}
if(s[0]==s[1]||s[1]==s[2]||s[3]==s[4]||s[2]==s[3])ans=1;
if((s[0]==s[1]||s[1]==s[2])&&(s[2]==s[3]||s[3]==s[4]))ans=2;
if(s[0]==s[2]||s[1]==s[3]||s[2]==s[4])ans=3;
if(s[2]+1==s[3]&&s[1]+1==s[2]&&s[3]+1==s[4]&&(s[0]+1==s[1]||(s[0]==1&&s

[4]==13)))ans=4;
if((s[0]==s[2]&&s[3]==s[4])||(s[0]==s[1]&&s[2]==s[4]))ans=5;
if(s[0]==s[3]||s[1]==s[4])ans=6;

for(int i=0;i<7;i++){if(ans==i)cout<<a[i]<<endl;}

}

}