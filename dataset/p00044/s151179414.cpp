#include<iostream>
using namespace std;

int main(){
  bool is_prime[100000];

  is_prime[0] = is_prime[1] = false;
  for(int i=2; i<100000; i++){
    is_prime[i] = true;
  }

  for(int i=2; i*i<100000; i++){
    if(is_prime[i]){
      for(int j=i*i; j<100000; j+=i){
	is_prime[j] = false;
      }
    }
  }

  while(true){
    int n;
    cin >> n;

    if(cin.eof())
      break;

    for(int i=n-1; i>=2; i--){
      if(is_prime[i]){
	cout << i << ' ';
	break;
      }
    }
    for(int i=n+1; i<=60000; i++){
      if(is_prime[i]){
	cout << i << endl;
	break;
      }
    }
  }

  return 0;
}

