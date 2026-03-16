#include<iostream>
#include<cstdio>
#include<map>
#include<string>
using namespace std;
int main(){
  map<string,int> num;
  num["A"]=0; num["B"]=0; num["O"]=0; num["AB"]=0;
  int n; char b[3];
  while(scanf("%d,%2s",&n,b)+1){
    // if(n==0)break;
    num[b]++;
  }
  cout<<num["A"]<<endl<<num["B"]<<endl<<num["AB"]<<endl<<num["O"]<<endl;
}