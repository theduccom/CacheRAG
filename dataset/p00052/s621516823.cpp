#include <iostream>
using namespace std;

int main(void)
{
  int n;

  while (cin >> n, n){
    int ct = 0;
    while (n >= 5){
      n /= 5;
      ct += n;
    }
    cout << ct << endl;
  }
  return (0);
}