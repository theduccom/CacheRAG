#include <iostream>
using namespace std;

int main()
{
  bool is_prime[1000000];
  is_prime[0] = is_prime[1] = false;
  for(int i=2; i<1000000; i++){
    is_prime[i] = true;
  }

  for(int i=2; i*i<1000000; i++){
    if(is_prime[i]){
      for(int j=i*i; j<1000000; j+=i){
        is_prime[j] = false;
      }
    }
  }

  while(1){
    int n;
    cin >> n;

    if(cin.eof())
      break;

    int i=n-1, j=n+1;
    while(1){
      if(is_prime[i]){
        break;
      }
      i-=1;
    }

    while(1){
      if(is_prime[j])
        break;
      j++;
    }
    cout << i << ' ' << j << endl;
  }
  return 0;
}

