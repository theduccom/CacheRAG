#include <iostream>
using namespace std;
int main( void )
{
  int a,b,c,n=0,m=0;
  char s,t;
  while( 1 ){
    cin>>a>>s>>b>>t>>c;
    if( cin.eof() ) break;
    if( a*a+b*b == c*c ) n++;
    if( a == b ) m++;
  }
  cout << n << endl;
  cout << m << endl;
  return 0;
}