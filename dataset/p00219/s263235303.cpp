#include <iostream>
#include <algorithm>

using namespace std;

int main(void){

  int n;
  while( cin >> n , n ){

    int icenum;
    int ice[10] = {0};    

    for( int i = 0 ; i < n ; i++ ){
      cin >> icenum;
      ice[icenum]++;
    }

    for( int i = 0 ; i < 10 ; i++ ){
      int I = ice[i];
      if(I){
	for( int j = 0 ; j < I ; j++ ){
	  cout << "*";
	    }
      }
      else cout << "-";
      cout << endl;
    }
  
  }
  return 0;
}