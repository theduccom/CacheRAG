#include<iostream>
#include<cmath>
using namespace std;

int main(){

  typedef struct{
    double x, y, r;
  }_CirclePara;
  
  int n;
  double d;
  _CirclePara a, b;
  
  cin >> n;
  for(int i=0; i<n; i++){
		cin >> a.x >> a.y >> a.r >> b.x >> b.y >> b.r;
  	
  	d = sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
	  if(a.r + b.r < d) cout << 0 << endl;
	  else if(a.r - b.r > d) cout << 2 << endl;
	  else if(b.r - a.r > d) cout << -2 << endl;
	  else cout << 1 << endl;
  }

  return 0;

}