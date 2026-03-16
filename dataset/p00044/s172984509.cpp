//06
#include<iostream>

using namespace std;

int main(){
  for(int n;cin>>n;){
    for(int m=n-1;;m--){
      int i;
      for(i=2;i<m;i++){
	if(m%i==0)break;
      }
      if(!(i<m)){
	cout<<i<<' ';
	break;
      }
    }
    for(int m=n+1;;m++){
      int i;
      for(i=2;i<m;i++){
	if(m%i==0)break;
      }
      if(!(i<m)){
	cout<<i<<endl;
	break;
      }
    }
  }
  return 0;
}