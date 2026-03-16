#include<stdio.h>
#include<iostream>

using namespace std;

int main(void) {
  double min, max, in;

  cin >> in;
  min = in;
  max = in;

  while(cin >> in) {
    if(min > in) {
     min = in;
    }

    if(max < in) {
      max = in;
    }
  }

  cout << (max - min) << endl;
  return 0;
}