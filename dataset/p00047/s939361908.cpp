#include<iostream>
#include<string>
using namespace std;

int main(){
char X='A';
string s;
while(cin>>s){
for(int i=0;i<1;i++){
if(s[0]==X){X=s[2]; break;}
if(s[2]==X)X=s[0];}}
cout<<X<<endl;}