#include <iostream>
using namespace std;

int main(){
  int n;

  while(1){
    cin >> n;
    if( n == 0) break;
    for(int i = 0; i < n; i++){
      int m,e,j;
      cin >> m >> e >> j;
      double a = (m+e+j)/3;
      //      cout << "average " << a << endl;

      if(m == 100 || e == 100 || j == 100){
	cout << "A" << endl;
      }
      else if( double((m+e))/2 >= 90){
	cout << "A" << endl;
      }
      else if(a >= 80 ){
	cout << "A" << endl;
      }
      else if(a >=70 ){
	cout << "B" << endl;
      }
      else if(a >=50 ){
	if(m >= 80 || e >= 80){
	  cout << "B" << endl;
	}
	else{
	  cout << "C" << endl;
	}
      }
      else{
	cout << "C" << endl;
      }
    }

  }


  return 0;
}