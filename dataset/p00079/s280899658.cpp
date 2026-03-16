#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

int main(void){

  double x[1000];
  double y[1000];
  int i = 0;
  char ten;
  while( cin >> x[i] >> ten >> y[i] ){
    i++;
  }

  double S = 0;
  for( int j = 0 ; j < i ; j++ ){
    int J = j + 1;
    if( J == i ) J = 0;
    S =  S + x[J]*y[j] - x[j]*y[J];
  }
  S = abs(S)/2;
  printf("%.6f", S);
  cout << endl;
  return 0;
}