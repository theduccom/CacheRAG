#include <iostream>
using namespace std;

bool xp(int a){
  for(int i=2;i*i<=a;i++){
    if(a%i==0) return false;
  }
    return a!=1;
}
  

int main(){
  int n;
  while(cin>>n){
    for(int i=n-1;i>1;i--){
      if(xp(i)){
	cout<<i<<" ";break;
      }
    }
    for(int i=n+1;;i++){
      if(xp(i)){
	cout<<i<<endl;break;
      }
    }
  }
  return 0;
}