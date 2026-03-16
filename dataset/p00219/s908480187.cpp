#include<iostream>
using namespace std;

int main(void){
  int n;
  while(cin>>n,n){
    int in[10] = {0};
    for(int i = 0 ; i < n ; i ++){
      int m;
      cin>>m;
      in[m] ++;
    }
    for(int i = 0 ; i < 10 ; i ++){
      if(in[i]){
	for(int j = 0 ; j < in[i] ; j ++)
	  cout<<"*";
      }
      else 
	cout<<"-";
      cout<<endl;
    }
  }
}