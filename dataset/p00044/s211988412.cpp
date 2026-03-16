#include<cmath>
#include<iostream>
using namespace std;

bool isPrime(int n){
  for(int i=2;i<=sqrt((double)n);i++){
    if(n%i == 0)return false;
  }
  return true;
}


int main(){
  int in;
  while(cin >> in){
    for(int i=in-1;i>=1;i--){
      if(isPrime(i)){
	cout << i << " ";
	break;
      }
    }
    for(int i=in+1;i<=60000;i++){
      if(isPrime(i)){
	cout << i << endl;
	break;
      }
    }

  }
  return 0;
}