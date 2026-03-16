#include<iostream>
#include<string>
using namespace std;

int main(){
string s;
cin>>s;
for(int i=0;s[i+4]!='\0';i++){
for(int j=0;j<1;j++){
if(s[i]=='a'&&s[i+1]=='p'&&s[i+2]=='p'&&s[i+3]=='l'&&s[i+4]=='e'){s[i]='p'; s[i+1]='e'; s[i+2]='a'; s[i+3]='c'; s[i+4]='h'; 

break;}
if(s[i]=='p'&&s[i+1]=='e'&&s[i+2]=='a'&&s[i+3]=='c'&&s[i+4]=='h'){s[i]='a'; s[i+1]='p'; s[i+2]='p'; s[i+3]='l'; s[i+4]='e'; 

break;}}}
cout<<s;
while(cin>>s){
for(int i=0;s[i+4]!='\0';i++){
for(int j=0;j<1;j++){
if(s[i]=='a'&&s[i+1]=='p'&&s[i+2]=='p'&&s[i+3]=='l'&&s[i+4]=='e'){s[i]='p'; s[i+1]='e'; s[i+2]='a'; s[i+3]='c'; s[i+4]='h'; 

break;}
if(s[i]=='p'&&s[i+1]=='e'&&s[i+2]=='a'&&s[i+3]=='c'&&s[i+4]=='h'){s[i]='a'; s[i+1]='p'; s[i+2]='p'; s[i+3]='l'; s[i+4]='e'; 

break;}}}
cout<<" "<<s;}
cout<<endl;
}