#include <iostream>
#include <math.h>
using namespace std;

int main(){
  int i,result;
  double v;
  while(cin >> v){
    for( i = 1; i < 1000; i++ ){
      if( v < 9.8*sqrt( ( 5.0*i-5.0)/4.9 ) ){
	  result = i;
	  break;
	}
	
    }
    cout << result << endl;
  }
  return 0;
}