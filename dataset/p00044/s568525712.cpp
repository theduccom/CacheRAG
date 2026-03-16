#include <cstdio>
#include <iostream>
using namespace std;

const int MAXN = 60000;

bool prime[MAXN] = {true, true};

int main()
{
  for (int i = 2; i * i < MAXN; i++){
    for (int j = i * i; j < MAXN; j += i){
      prime[j] = true;
    }
  }

  int n;
  
  while (~scanf("%d", &n)){
    for (int i = n - 1; i >= 2; i--){
      if (!prime[i]){
        printf("%d ", i);
        break;
      }
    }
    for (int i = n + 1; i < MAXN; i++){
      if (!prime[i]){
        printf("%d\n", i);
        break;
      }
    }
  }

  return (0);
}