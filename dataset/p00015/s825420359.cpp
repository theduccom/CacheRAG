#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;
int main(){

int n;
cin>>n;
for(int iii=0;iii<n;iii++){
string st1,st2;
int n1[83]={},n2[83]={};
cin>>st1>>st2;

int r=st1.size();
int N[83]={};int y=0;
if(r<st2.size())r=st2.size();
if(st1.size()>80||st2.size()>80)r=81;
else{
for(int i=0;i<st1.size();i++)
n1[i]=st1[st1.size()-i-1]-'0';
for(int i=0;i<st2.size();i++)
n2[i]=st2[st2.size()-i-1]-'0';



for(int i=0;i<r;i++){
N[i]=(n1[i]+n2[i]+y)%10;
y=(n1[i]+n2[i]+y)/10;
if(i==r-1&&y>0)r++;
}}
if(r>80)cout<<"overflow"<<endl;
else{
for(int i=0;i<r;i++)
cout<<N[r-i-1];
cout<<endl;
}}
return 0;
}