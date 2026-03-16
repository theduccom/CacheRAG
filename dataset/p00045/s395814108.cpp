#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<string>
#include<sstream>
#include<cmath>
#include<numeric>
using namespace std;


int main(){

  int a, b;
  int sum = 0;
  int num = 0;
  int n = 0;
  while( scanf("%d,%d", &a, &b) != EOF ){
    if( a == 0 && b == 0 ) break;
    sum += a * b;
    num += b;
    n++;
  }
  double ave = num * 1.0 / n;
  ave += 0.5;

  cout << sum << endl;
  cout << (int)(ave) << endl;

  return 0;
}