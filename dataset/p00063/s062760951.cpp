#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;

int main(){
string str,t;
int n=0,c=0;
bool f=true;

while(cin>>str){
t=str;
n=str.size();
for(int i=0;i<n;i++)
{t[i]=str[n-i-1];}
for(int i=0;i<n;i++)
if(t[i]!=str[i])f=false;

if(f==true)c++;
f=true;n=0;
}
cout<<c<<endl;

return 0;
}