#include <iostream>
#include <cmath>

using namespace std;

int main(){
  int d,t;
  char c;
  double x=0.0, y=0.0, angle=0.0;


  while( cin>>d>>c>>t && (d||t) ){
    x += (double)( d*sin( angle*M_PI/180.0) );
    y += (double)( d*cos( angle*M_PI/180.0) );
    angle += (double)t;    
  }

  cout << (int)x << endl;
  cout << (int)y << endl;

  return 0;
}