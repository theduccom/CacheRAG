#include <iostream>
using namespace std;
int main(){
  int a ,n ,i ,ice[10]={};
  while(  cin >> n ){
    if( n == 0 ){
      break;
    }
    
    for( i=0 ; i<n ; i++ ){
      cin >> a;
      ice[a]++;
    }
    
    for( i=0 ; i<10 ; i++ ){
      if( ice[i] == 0 ){
	cout << '_';
      }

      for( int j=0 ; j<ice[i] ; j++ ){
	cout << '*';
      }
      cout << endl;
      }
    for( i=0 ; i<10 ; i++ ){
      ice[i] = 0;
    }
  }
  
  return 0;
}