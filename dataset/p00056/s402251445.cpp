#include <iostream>

using namespace std;

bool flag[50001];
int prime[50001];

int main(){
  int n = 0;
  int i, j;

  flag[0] = flag[1] = true;
  for (i = 2; i * i <= 50000; i++){
    if(flag[i] != true){
      for(j = i * i; j <= 50000; j += i){
        flag[j] = true;
      }
    }
  }
  j = 0;
  for (i = 0; i <= 50000; i++){
    if (!flag[i]){
      prime[j++] = i;
    }
  }
  while(cin >> n, n){
    int cnt = 0;
    for(i = 0; prime[i] <= n / 2; i++){
      if (flag[n - prime[i]] == false){
        cnt++;
      }
    }
    cout << cnt << endl;
  }

  return (0);
}