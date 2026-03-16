#include <iostream>
using namespace std;

int FactorialII(int n)
{
  int res = 0;
  while (n) {
    res += n/5;
    n /= 5;
  }
  return res;
}

int main(int argc, char **argv)
{
  int n;
  while (cin >> n) {
    if (!n)
      break;
    cout << FactorialII(n) << endl;
  }
  return 0;
}