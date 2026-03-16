#include <iostream>
#define MAX 50000

using namespace std;

bool is_prime[MAX];

void tenes(void){

  for( int i = 0 ; i < MAX ; i++ ){
    is_prime[i] = true; 
  }
  is_prime[0] = is_prime[1] = false;

  for( int i = 2 ; i*i < MAX ; i++ ){
    if( is_prime[i] ){
      for( int j = i + i ; j < MAX ; j += i ){
	is_prime[j] = false;
      }
    }
  } 
}

int main(void){
  
  tenes();
  
  int n;
  while( cin >> n ){
    if( n == 0 )break;
    
    int cnt = 0;
    for( int i = 2 ; i <= n/2 ; i++ ){
      if( is_prime[i] && is_prime[n-i] ){
	cnt++;
      }
    }
    cout << cnt << endl;
  }
  return 0;
}