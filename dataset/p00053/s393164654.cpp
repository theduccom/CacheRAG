#include <iostream>
using namespace std;


bool p[1000000];

int main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);

  for (int i = 2; i < 1000000; i++){
    p[i] = true;
  }
  for (int i = 2; i * i < 1000000; i++){
    if (p[i]){
      for (int j = 2 * i; j < 1000000; j += i){
        p[j] = false;
      }
    }
  }

  int n;

  while (cin >> n, n){
    int sum = 0;
    int f = 0;
    
    for (int i = 0; f != n; i++){
      if (p[i]){
        sum += i;
        f++;
      }
    }
    cout << sum << endl;
  }
}