#include<iostream>
using namespace std;

int main()
{
  while(true){
    int n;
    cin >> n;
    if( n == 0 ) break;
    for(int i = 0; i < n; ++i ){
      int pm,pe,pj;
      double meav;
      double av;
      char rank = 'C';
      cin >> pm >> pe >> pj; // math , english, japanese
      meav = ((double)(pm+pe))/2.;
      av = ((double)(pm+pe+pj))/3.;
      if( pm == 100 || pe == 100 || pj == 100 ){
	rank = min( 'A' , rank );
      }
      if( meav >= 90.0 ){
	rank = min( 'A' , rank );
      }
      if( av >= 80.0 ){
	rank = min( 'A', rank );
      }
      if( av >= 70.0 ){
	rank = min( 'B', rank );
      }
      if( av >= 50.0 && ( pm >= 80 || pe >= 80 ) ){
	rank = min( 'B', rank );
      }
      
      cout << rank << endl;
    }
  }
  return 0;
}