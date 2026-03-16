#include <iostream>
using namespace std;

bool is_prime(int n){
  if(n<=1)
    return false;

  for(int i=2; i*i<=n; i++){
    if(n%i==0){
      return false;
    }
  }

  return true;
}


int main(){
  while(true){
    int next=0;
    int prev=0;

    int n;
    cin >> n;

    if(cin.eof())
      break;

    for(int i=n+1; i<=50100; i++){
      if(is_prime(i)){
        next=i;
        break;
      }
    }
    for(int i=n-1; i>=2; i--){
      if(is_prime(i)){
        prev=i;
        break;
      }
    }

    cout << prev << ' ' << next <<endl;
  }

  return 0;
}

