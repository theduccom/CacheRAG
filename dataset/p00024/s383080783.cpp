#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<string>
#include<sstream>
#include<cmath>
using namespace std;

int main(){

  double v;
  while( cin >> v ){
    double t = v / 9.8;
    double y = 4.9 * t * t;
    // cout << y << endl;
    int n = (y + 5 + 0.0000001) / 5;
    n++;
    cout << n << endl;
  }

  return 0;
}