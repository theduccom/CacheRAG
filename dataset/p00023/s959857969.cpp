#include<iostream>
#include<cmath>

using namespace std;

int Calculate(double, double, double, double, double, double);
double GetDistance(double, double, double, double);

int main(){
  int i, n;
  double xa, ya, ra, xb, yb, rb;

  cin >> n;
  for(i=0; i<n; ++i){
    cin >> xa >> ya >> ra >> xb >> yb >> rb;
    cout << Calculate(xa, ya, ra, xb, yb, rb) << endl;
  }
  return 0;
}

int Calculate(double xa, double ya, double ra,
	      double xb, double yb, double rb){
  double r;
  r = GetDistance(xa, ya, xb, yb);
  if(ra > rb && ra > r + rb) return 2;
  if(ra < rb && rb > r + ra) return -2;
  if(r <= ra + rb) return 1;
  return 0;
}

double GetDistance(double xa, double ya, double xb, double yb){
  double x, y;
  x = xa - xb;
  y = ya - yb;
  return sqrt(x*x + y*y);
}