#include<algorithm>
#include<iostream>
#include<string>
#include<cstdlib>
#include<cstring>
#include<cmath>
using namespace std;
int main(){
  int i,j,k,l;
  int a[5140],p;
  int ct;
  bool b[50000];
  memset(b,0,50000);
  a[0]=2;
  j=1;
  b[2]=1;
  for(i=3;i<50000;i+=2){
    l=(int)sqrt(i)+1;
    for(k=3;k<l;k+=2){
      if(i%k==0)
	break;
    }
    if(k>=l){
      a[j]=i;
      j++;
      b[i]=1;
    }
  }
  while(cin>>p&&p){
    if(p%2){
      if(b[p-2])
	ct=1;
      else
	ct=0;
    }else{
      ct=0;
      for(i=0;a[i]*2<=p;i++){
	if(b[p-a[i]])
	  ct++;
      }
    }
    cout<<ct<<endl;
  }
  return 0;
}