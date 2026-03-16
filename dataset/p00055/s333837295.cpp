#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  double s[10], res;
  
  while(cin >> s[0]){
    res = s[0];
    for (int i = 1; i < 10; i++){
      if (i % 2 == 0){
        s[i] = s[i - 1] / 3;
      }
      else {
        s[i] = s[i - 1] * 2;
      }
      res += s[i];
    }
    cout << setprecision(10) << res << endl;
  }
  return (0);
}