#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int n;

  while (cin >> n, n){
    cout << (int)(n / pow(5, 1)) + (int)(n / pow(5, 2)) + (int)(n / pow(5, 3)) + (int)(n / pow(5, 4)) + (int)(n / pow(5, 5)) + (int)(n / pow(5, 6)) << endl;
  }
}