#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

int main(void)
{
  while(1){
    int n;
    cin >> n;
    if(!n) break;
    int ret = 0;
    while(n){
      n /= 5;
      ret += n;
    }
    cout << ret << endl;
  }
}