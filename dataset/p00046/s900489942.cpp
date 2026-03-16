#include<iostream>
using namespace std;

int main(){
double a,small,big;
cin>>small;
big=small;
while(cin>>a){
if(a<small)small=a;
if(a>big)big=a;}
cout<<big-small;}