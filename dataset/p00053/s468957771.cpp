#include <bits/stdc++.h>
using namespace std;

#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define REP(i, n) for (int i = 0; i < (n); i++)

bool flag[10000001];
int main()
{
  int n = 0;
  for (int i = 0; i <= 1000000; i++){
    if (i <= 1) flag[i] = false;
    else flag[i] = true;
  }
  for (int i = 2; i <= 1001; i++){
    if(flag[i] == true){
      for(int j = i * 2; j <= 1000000; j += i){
        flag[j] = false;
      }
    }
  }
  while(cin >> n, n){
    int cnt = 0, sum = 0;
    for(int i = 1; i < 10000001; i++){
      if (cnt >= n) break;
      if(flag[i] == true){
        sum += i;
        cnt++;
      }
    }
    cout << sum << endl;
  }
}