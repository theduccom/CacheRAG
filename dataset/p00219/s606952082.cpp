#include<iostream>
using namespace std;
int main(){
  int n,bell,hess=0,aice[100]={0};
  while(1){
    for(int i=0;i<100;i++){
      aice[i]=0;
    }
    cin >> n;
    if(n==0){
      break;
    }
    for(int i=0;i<n;i++){
      cin >> bell;
      aice[bell]++;
    }
    for(int i=0;i<10;i++){
      for(int j=0;j<aice[i];j++){
	hess++;
	cout << "*";
      }
      if(hess==0){
	cout << "-";
      }
      hess=0;
      cout << endl;
    }
  }
  return (0);
}