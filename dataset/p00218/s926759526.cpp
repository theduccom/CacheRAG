#include <iostream>

using namespace std;

int main(void){

  int n;
  while( cin >> n , n ){

    while(n--){

      int pm,pe,pj;
      cin >> pm >> pe >> pj;

      if( pm == 100 || pe == 100 || pj == 100 ){
	cout << "A" << endl;
	continue;
      }
      if( (pm + pe) / 2 >= 90 ){
      	cout << "A" << endl;
	continue;
      }
      if( ( pm + pe + pj ) / 3 >= 80 ){
	cout << "A" << endl;
	continue;
      }
      if( ( pm + pe + pj ) / 3 >= 70 ){
	cout << "B" << endl;
	continue;
      }
      if( ( pm + pe + pj ) / 3 >= 50 && ( pm >= 80 || pe >= 80 ) ){
	cout << "B" << endl;
	continue;
      }
      cout << "C" << endl;
    }
  }
  return 0;
}