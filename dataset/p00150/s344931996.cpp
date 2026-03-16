#include<iostream>
using namespace std;
int n;

bool isP(int x){
  if(x==0||x==1)return false;
  for(int i=2;i*i<=x;i++){
    if(x%i==0)return false;
  }
  return true;
}

int main(){
  while(cin>>n&&n){
    for(int i=n;i-2>=1;i--){
      if(isP(i)&&isP(i-2)){
	cout<<i-2<<' '<<i<<endl;
	break;
      }
    }
  }
  return 0;
}