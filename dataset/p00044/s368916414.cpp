#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

#define loop(i, a, b) for(int i = a; i < b ; i++)
#define rep(i, a) loop(i, 0, a)
#define MAX 50022

int main()
{
  bool prime[MAX];
  rep(i, MAX) prime[i] = true;
  prime[0] = prime[1] = false;
  loop(i, 2, sqrt(MAX)){
    for(int j = i * 2; j < MAX; j += i){
      prime[j] = false;
    }
  }
  
  int n;
  while(cin >> n) {
    for(int j = n - 1; j > 1; j--) if(prime[j] == true) {cout << j << ' '; break;}
    loop(i, n + 1, MAX)            if(prime[i] == true) {cout << i << endl; break;}
  }
}