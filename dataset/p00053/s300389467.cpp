#include <bits/stdc++.h>
using namespace std;

bool pn[1000001];
int main()
{
  pn[0] = pn[1] = false;

  for (int i = 2; i <= 1000001; i++){
    pn[i] = true;
  }
  for (int i = 2; i <= 1001; i++){
    if (pn[i]){
      for (int j = i * 2; j <= 1000001; j += i){
        pn[j] = false;
      }
    }
  }
  int n;
  while (cin >> n, n){
    int s = 0, ct = 0;
    
    for (int i = 1; i <= 1000001; i++){
      if (ct >= n)  break;
      if (pn[i]){
      s += i;
      ct++;
      }
    }
    cout << s << endl;
  }
}