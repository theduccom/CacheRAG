#include<iostream>
#include<cmath>
using namespace std;

int main(void){
  int n;
  cin >> n;
  for( int i = 0; i < n; i++){
    bool f = true;
    double xa, xb, ya, yb, ra, rb;
    long double r;

    cin >> xa >> ya >> ra >> xb >> yb >> rb;

    r = sqrt( pow(fabs(xa - xb), 2) + pow(fabs(ya - yb), 2));
    // cout << sqrt( pow(fabs(xa - xb), 2) + pow(fabs(ya - yb), 2)) << endl;
    //cout << r << endl;
    if( r > ra + rb ){
      cout << 0 << endl;
    }
    else{
    
      if(ra < rb)
	f = false;

      if(f){

	if(r + rb < ra){
	  cout << 2 << endl;
	}else{
	  cout << 1 << endl;
	}
      }

      else{
	if(r + ra < rb){
	  cout << -2 << endl;
	}else{
	  cout << 1 << endl;
	}
      }
    }
  }
  return 0;
}