#include <iostream>
using namespace std;

int main(void){
  double t, max, min;
  cin >> t;
  max = t;
  min = t;
  while(cin >> t){
    if(max < t) max = t;
    if(min > t) min = t;
  }
  cout << (max - min) << endl;
  return 0;
}