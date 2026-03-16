#include <bits/stdc++.h>
using namespace std;

#define MAX 50030

int main()
{
  bool prime[MAX];
  for (int i = 0; i < MAX; i++) prime[i] = true;
  prime[0] = prime[1] = false;
  for (int i = 2; i < sqrt(MAX); i++){
    for (int j = i * 2; j < MAX; j += i){
      prime[j] = false;
    }
  }

  int n;
  while (cin >> n){
    for (int i = n - 1; i > 1; i--) {
      if (prime[i]) {
        cout << i << ' ';
        break;
      }
    }
    for (int i = n + 1; i < MAX; i++){
      if (prime[i]){
        cout << i << '\n';
        break;
      }
    }
  }
}