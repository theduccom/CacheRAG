#include<iostream>
#include<vector>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

inline bool isPrime(int a){
  if(a<=1)return false;
  for(int i=2;i*i<=a;i++){
    if(a % i == 0)return false;
  }
  return true;
}

int main(){
  vector<int> table(10001,0);
  for(int i=1;i<=10000;i++){
    if(i>=2 && isPrime(i) && isPrime(i-2)){
      table[i] = i;
    }else{
      table[i] = table[i-1];
    }
  }

  int n;
  while(cin >> n){
    if(n==0)break;
    cout << table[n]-2 << " " << table[n] << endl;
  }  
}