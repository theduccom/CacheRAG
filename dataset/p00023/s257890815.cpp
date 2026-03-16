#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int n;
  cin >> n;
  for(int i = 0; i < n; i++){
    double xa, ya, ra, xb, yb, rb;
    cin >> xa >> ya >> ra >> xb >> yb >> rb;
    double dis = sqrt(pow((xa - xb), 2) + pow((ya - yb), 2));
    if(fabs(ra - rb) > dis)
      if(ra > rb)
	cout << "2" << endl;
      else
	cout << "-2" << endl;
    else if(fabs(ra - rb) <= dis && ra + rb >= dis)
      cout << "1" << endl;
    else
      cout << "0" << endl;
  }
}