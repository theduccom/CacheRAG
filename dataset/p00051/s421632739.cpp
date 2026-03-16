#include <iostream>
#include <algorithm>
#include <functional>
#include <numeric>
using namespace std;

int main()
{
  int n;
  cin >> n;

  while (n--){
    int a, e = 10000000, maxN = 0, minN = 0;
    int num[8];

    cin >> a;

    for (int i = 0; i < 8; i++){
      num[i] = (a / e) % 10;
      e /= 10;
    }

    sort(num, num + 8);

    e = 10000000;
    for (int i = 0; i < 8; i++){
      minN += (num[i] * e);
      e /= 10;
    }

    sort(num, num + 8, greater<int>());

    e = 10000000;
    for (int i = 0; i < 8; i++){
      maxN += (num[i] * e);
      e /= 10;
    }

    cout << maxN - minN << endl;
  }
}