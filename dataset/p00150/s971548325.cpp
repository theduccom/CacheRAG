#include <iostream>
#include <algorithm>
#define N 10001
using namespace std;

int main(){
  int n;
  int p[N], pn=0;
  bool isPrime[N];

  for( int i=0;i<N;i++ ) isPrime[i]=true;

  for( int i=2;i<N;i++ ){
    if( !isPrime[i] ) continue;
    p[pn++] = i;
    for( int j=2*i;j<N;j+=i ) isPrime[j]=false;
  }

  while( cin>>n && n ){
    // nより大きい要素を指す最小のポインタ
    int *q=upper_bound( p,p+pn,n );
    q--;
    while( *q - *(q-1) != 2 ) q--;

    cout << *(q-1) << " " << *q << endl;
  }

  return 0;
}