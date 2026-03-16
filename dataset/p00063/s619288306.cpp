#include<iostream>
#include<string>
using namespace std;

int main(){
int a,ans=0;
bool b;
string s;
while(cin>>s){
b=true;
a=s.size();
for(int i=0;2*i<a+3;i++){if(s[i]!=s[a-i-1]){b=false; break;}}
if(b)ans++;}
cout<<ans<<endl;}