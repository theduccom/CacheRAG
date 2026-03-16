#include <iostream>
using namespace std;

int main(){
  int l[10];
  int v1,v2, d;
  double t, dis;
  char c;
  while( cin>>l[0] && l[0] ){
    d=l[0];
    for( int i=1;i<10;i++ ){
      cin >> c >> l[i];
      d += l[i];
    }
    cin >> c >> v1 >> c >> v2;

    if( v1==0 )
      cout << 1 << endl;
    else if( v2==0 )
      cout << 10 << endl;
    else{
      t = (double)d/(v1+v2);
      dis = v1*t;
      d=0;
      for( int i=0;i<10;i++ ){
	d += l[i];
	if( 1.0e-8 > dis - d ){
	  cout << (i+1) << endl;
	  break;
	}
	if( i==9 )
	  cout << 10 << endl;
      }
    }
  }
  return 0;
}