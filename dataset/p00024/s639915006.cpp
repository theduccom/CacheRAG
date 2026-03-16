#include<iostream>
#include<cmath>

using namespace std;

int main(){
  int i;
  double n, t, v, y;

  while(cin >> n){
    i = 1;
    while(1){
      y = 5 * (i - 1);
      t = sqrt(y / 4.9);
      v = 9.8 * t;
      if(n <= v) break;
      ++i;
    }
    cout << i << endl;
  }
  return 0;
}