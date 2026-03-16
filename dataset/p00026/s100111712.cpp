#include <iostream>
using namespace std;
int d[512];
#define N 10
#define M 20
int main( void )
{
  int x,y,s,a,mx=0,n=0;
  char c1,c2;
  int *p = d+256;
  while( 1 ){
    cin>>x>>c1>>y>>c2>>s;
    if( cin.eof() ) break;
    a = y*M+x;
    p[a]++; p[a-1]++; p[a+1]++; p[a+M]++; p[a-M]++;
    if( s > 1 ){ p[a+1+M]++; p[a-1+M]++; p[a+1-M]++; p[a-1-M]++; }
    if( s > 2 ){ p[a+2]++; p[a-2]++; p[a+2*M]++; p[a-2*M]++; }
  }
  for( y=0; y<N; y++ ) for( x=0; x<N; x++ ){
    a = p[y*M+x];
    if( mx < a ) mx = a;
    if( a == 0 ) n++;
  }
  cout << n << endl;
  cout << mx << endl;
  return 0;
}