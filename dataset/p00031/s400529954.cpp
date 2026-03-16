#include<bits/stdc++.h>
using namespace std;
main(){
  unsigned int n;
  int p;
  bool f;
  while(cin>>n){
    p=1;
    f=false;
    while(n!=0){
      if(n&1==1){
	if(f){
	  cout<<" ";
	}
	else{
	  f=true;
	}
	cout<<p;
      }
      n=n>>1;
      p*=2;
    }
    cout<<endl;
  }
}