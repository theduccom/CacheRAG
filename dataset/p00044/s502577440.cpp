#include <iostream>
using namespace std;

bool is_prime(int n){
  if(n <= 1)
    return false;

  for(int i=2;i*i<=n;i++){
    if(n%i == 0)
      return false;
  }
  return true;
}

int main(){
    int n;

    bool is_prime[1000000];
    is_prime[0] = is_prime[1] = false;
    for(int i=2; i<1000000;i++){
      is_prime[i] = true;
    }
    for(int i=2; i*i<1000000; i++){
      if(is_prime[i]){
        for(int j=i*i;j<1000000; j+=i){
          is_prime[j] = false;
        }
      }
    }

    int n_prime[1000000];

    int cnt = 0;
    for(int i=0;i<1000000;i++){
      if(is_prime[i]){
        cnt++;
      }
      n_prime[i] = cnt;
    }

    while(1){
      int primen;
      cin >> n;
      if(cin.eof())
        break;

      for(int i=n-1;;i--){
        if(is_prime[i]){
          cout << i << ' ';
          break;
        }
      }

      for(int i=n+1;;i++){
        if(is_prime[i]){
          cout << i << endl;
          break;
        }
      }
    }

}

