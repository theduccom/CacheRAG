#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <string>
#include <cmath>
#include <cstdio>
using namespace std;

#define PI 4*atan(1);

int main(){
  double v, y, t;
  while(cin >> v){
    for(int i = 1;; i++){
      y = 5 * i - 5;
      // y = 4.9 * t * t;
      t =  sqrt(y / 4.9);
      if(9.8 * t >= v){
        cout << i << endl;
        break;
      }
    }
  }
}