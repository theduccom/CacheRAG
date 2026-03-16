#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

void printData(int n){
  if(n==0) cout<<"-";
  else 
    for(int i=0;i<n;i++)
      cout<<"*";
  cout<<endl;
}

int main(){

  int n,work;
  while(1){
    cin>>n;
    if(n==0) break;
    int array[10];
    
    for(int i=0;i<10;i++)
      array[i]=0;
    
    for(int i=0;i<n;i++){
      cin>>work;
      array[work]++;
    }
    for(int i=0;i<10;i++){
      printData(array[i]);
    }
  }
  
  return 0;
}