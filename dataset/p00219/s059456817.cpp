#include<bits/stdc++.h>
using namespace std;

int main(){
  
  int n;
  
  while(1){
    
    cin>>n;

    if(n==0) break;
    
    int c[10]={};
    int v;
    
    for(int i=0;i<n;i++){
      cin>>v;
      c[v]++;
    }
    
    for(int i=0;i<10;i++){
      if(c[i]==0) cout<<"-"<<endl;
      else{
	for(int j=0;j<c[i];j++){
	  cout<<"*";
	}
	cout<<endl;
      }
    }
  }
  
  return 0;
}

