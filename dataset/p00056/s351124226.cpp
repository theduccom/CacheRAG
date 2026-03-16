#include<iostream>

using namespace std;

int prime[50001];

void make(){

  for(int i = 0; i < 50001; i++) prime[i] = 1;

  prime[0] = 0;
  prime[1] = 0;

  for(int i = 2; i*i < 50001; i++){
    if(prime[i] == 1){
      for(int j = i*2; j < 50001; j+=i) prime[j] = 0;
    }
  }
}


int main(){

  make();

  int n;

  while(cin >> n){
    if(n == 0) break;

    int sum = 0;

    for(int i = 2; i <= n/2; i++){
      if(prime[i] == 1 && prime[n-i] == 1) sum++;
    }
    cout << sum << endl;
  }

  return 0;     
}
  