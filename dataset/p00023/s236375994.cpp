#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int n, r;
  double xa, ya, ra, xb, yb, rb, d;

  while(cin>>n && n)
    while(n--){
      cin >> xa >> ya >> ra >> xb >> yb >> rb;
      d = sqrt(pow(xa-xb, 2.0)+pow(ya-yb, 2.0));
      if(fabs(ra-rb) > d){
	if(ra > rb) r = 2;
	else if(ra < rb) r = -2;
	else r = 1;
      } else if(d <= ra+rb && fabs(ra-rb) <= d){
	r = 1;
      } else {
	r = 0;
      }
      cout << r << endl;
    }

  return 0;
}