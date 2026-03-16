#include <iostream>
#define G 9.8
using namespace std;

int main()
{
  double v;
  while(cin >> v){
    int y = v * v / (2 * G);
    cout << (y + 5) / 5 + 1 << endl;
  }
}