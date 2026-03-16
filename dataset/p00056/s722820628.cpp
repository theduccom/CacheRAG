#include <bits/stdc++.h>
using namespace std;

const int MAXN = 50001;

bool prime[MAXN] = {true, true};

int main()
{
  for (int i = 2; i * i < MAXN; i++){
    for (int j = i * i; j < MAXN; j += i){
      prime[j] = true;
    }
  }
  
  int n;
  while (scanf("%d", &n), n){
    int cnt = 0;
    for (int i = 2; i <= n / 2; i++){
      if (!prime[i] && !prime[n - i]){
        cnt++;
      }
    }
    printf("%d\n", cnt);
  }

  return (0);
}