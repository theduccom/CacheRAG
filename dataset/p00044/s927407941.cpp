#include <iostream>
#include <cstring>
using namespace std;

bool primeFlg[1000000];

void makePrime(){
  memset(primeFlg, true, sizeof(primeFlg));
  primeFlg[0] = primeFlg[1] = false;

  for(int i = 2; i * i <= 1000000; i++){
    if(primeFlg[i]){
      for(int j = i + i; j < 1000000; j += i){
        primeFlg[j] = false;
      }
    }
  }
}

int main(){
  int n;

  makePrime();

  while(cin >> n){
    for(int i = n - 1; ; i--){
      if(primeFlg[i]){
        cout << i << " ";
        break;
      }
    }

    for(int i = n + 1; ; i++){
      if(primeFlg[i]){
        cout << i << endl;
        break;
      }
    }
  }
}