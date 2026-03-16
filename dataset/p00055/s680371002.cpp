#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
int main(void)
{
  long double a;
  while(cin >> a){
    long double sum = a;
    for(int i = 1; i < 10; i++){
      if(i%2) a *= 2;
      else a /= 3;
      sum += a;
    } 
    cout.precision(20);
    cout << sum << endl;
  }
}