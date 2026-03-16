#include <iostream>
#include <cstdio>

using namespace std;

int main(void){

  int sum = 0;
  double sum_v = 0;
  int ave;
  int v,n;
  char ten;
  int cnt = 0;
  while( cin >> v >> ten >> n ){
    sum +=  v * n;
    cnt++;
    sum_v += n;
  }

  cout << sum << endl;
  printf("%.0f\n",sum_v / cnt + 0.5 );

  return 0;
}