#include<iostream>
#include<algorithm>
#include<stdio.h>

using namespace std;

int main(){
  int a[3];
  int rec=0,dia=0;
  while(scanf("%d,%d,%d",&a[0],&a[1],&a[2])!=EOF){
    if(a[0]*a[0]+a[1]*a[1]==a[2]*a[2]){
      rec++;
    }
    if(a[0]==a[1]){
      dia++;
    }
  }
  cout<<rec<<"\n"<<dia<<"\n";
  return 0;
}