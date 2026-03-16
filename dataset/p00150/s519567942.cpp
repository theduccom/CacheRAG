#include <iostream>
using namespace std;

int main(){
  int i ,j ,n;
  while( true ){
    cin >> n;
    if( n == 0 ){
      break;
    }
    int prime[n+1]; // 素数
    for( i=2 ; i<=n ; i++ ){ // 自然数を列挙
      prime[i] = 1;
    }
    
    i = 2;
    while( i <= n ){
      if( prime[i] == 1 ){ // 素数なら
	j = i*2;
	while( j <= n ){
	  prime[j] = 0;
	  j += i;
	}
      }
      i++;
    }
    for( i=n ; i>0 ; i-- ){
      if( prime[i] == 1 && prime[i-2] == 1 ){
	cout << i-2 << ' ' << i << endl;
	break;
      }
    }
  }
  return 0;
}