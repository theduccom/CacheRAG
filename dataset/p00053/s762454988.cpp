#include <iostream>
#define MAX 999999

using namespace std;

bool is_prime[MAX];

void isprime(void){

  for( int i = 0 ; i < MAX ; i++ ) is_prime[i] = true;
  is_prime[0] = is_prime[1] = false;

  for( int i = 2 ; i*i < MAX ; i++ ){
    if( is_prime[i] ){
      for( int j = i+i ; j < MAX ; j += i ){
	is_prime[j] = false;	
      }
    }
  }
}

int main(void){

  isprime();

  int n;
  while( cin >> n ){
    if( n == 0 )break;
    int sum = 0;
    for( int i = 2 ; ; i++ ){
      if( is_prime[i] ){
	sum += i;
	n--;
      }
      if( n == 0 )break;
    }
    cout << sum << endl;
  }
  return 0;
}