#include<iostream>
#include<string>
using namespace std;

int main(){
string s;
int A=0,B=0,O=0,AB=0;
while(cin>>s){
for(int i=0;;i++){
if(s[i]==','){
if(s[i+1]=='A'&&s[i+2]=='\0')A++;
if(s[i+1]=='A'&&s[i+2]=='B')AB++;
if(s[i+1]=='B')B++;
if(s[i+1]=='O')O++;
break;}}}
cout<<A<<endl<<B<<endl<<AB<<endl<<O<<endl;}