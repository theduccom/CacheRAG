#include <iostream>
#include <cstdio>

using namespace std;

int main(void){

  double n;
  while( cin >> n ){

    double ans = n;
    for( int i = 2 ; i <= 10 ; i++ ){
      if( i % 2 == 0 ){
	n *= 2;
	ans += n;
      }
      else {
	n /= 3; 
	ans += n;
      }
    }
    printf("%.8f\n", ans);
  }
  return 0;
}