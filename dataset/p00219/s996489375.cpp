#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  while(n!=0){
    int a;
    int q[10]={};
    for(int i=0;i<n;i++){
      cin>>a;
      q[a]++;
    }
    for(int i=0;i<10;i++){
      if(q[i]==0){
	cout<<'-'<<endl;
      }else{
	for(int l=0;l<q[i];l++){
	  cout<<'*';
	}
	cout<<endl;
      }
    }
    cin>>n;
  }
  return 0;
}

