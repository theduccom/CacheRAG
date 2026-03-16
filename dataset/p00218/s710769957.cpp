#include <iostream>
using namespace std;

int main()
{
  int n, pm, pe, pj;
  while (cin >> n, n){
    for (int i = 0; i < n; i++){
      cin >> pm >> pe >> pj;
      double sum = pm + pe + pj;
      if ((max(pm, max(pe, pj)) == 100) || (pm + pe) / 2 >= 90 || (sum / 3) >= 80){
        cout << 'A';
      }
      else if (sum / 3 >= 70 || (sum / 3 >= 50 && max(pm, pe) >= 80)){
        cout << 'B';
      } 
      else {
        cout << 'C';
      }
      cout << endl;
    }
  }
  return (0);
}