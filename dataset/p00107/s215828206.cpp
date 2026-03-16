#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
  int m[3];
  int n;

  while (cin >> m[0] >> m[1] >> m[2], m[0] || m[1] || m[2]){
    sort(m, m + 3);
    int S = m[0] * m[0] + m[1] * m[1];
    int n, num;
    cin >> n;
    while (n--){
      cin >> num;
      int size = num * num * 4;
      cout << (S < size ? "OK" : "NA") << endl;
    }
  }
  return (0);
}