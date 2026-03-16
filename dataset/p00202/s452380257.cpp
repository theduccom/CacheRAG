#include <iostream>
#define MAX 1000001

using namespace std;

bool dp[MAX];
int n,est;
int value[31] = {0};


int isPrime(int N){

  for( int i = 2 ; i*i + 1 < N ; i++ ){
    if( N % i == 0 ) return 0;
  }
  return N;

}

void solve(void){

  dp[0] = 1;
  for( int i = 0 ; i < n ; i++ ){
    for( int j = value[i] ; j <= est ; j++ ){
      if( dp[j - value[i]] ) dp[j] = true;
    }
  }
  
}

int main(void){


  while( cin >> n >> est , n + est ){

    fill( dp , dp + MAX , false );

    for( int i = 0 ; i < n ; i++ )
      cin >> value[i];

    solve();

    int ans = 0;
    for( int i = est ; i >= 2 ; i-- ){
      if( dp[i] ){
	ans = isPrime(i);
	if( ans ) break;
      }
    }
    if( ans ) cout << ans << endl;
    else cout << "NA" << endl;

  }

  return 0;
}