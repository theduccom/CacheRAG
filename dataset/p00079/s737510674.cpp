#include <iostream>
#include <string>
#include <cmath>
#include <cstdio>
using namespace std;

int main() {

  double sum = 0;

  double  x[21],y[21];
  double hen[30];
  double shen;
  int count = 0;
  double z;
  while(scanf("%lf,%lf",&x[count],&y[count]) != EOF) {
    if(count > 0) {
      hen[count-1] =  sqrt((x[0]-x[count])*(x[0]-x[count]) + (y[0]-y[count])*(y[0]-y[count]));
    }
    if(count >1) {
      shen = sqrt((x[count]-x[count-1])*(x[count]-x[count-1]) + (y[count]-y[count-1])*(y[count]-y[count-1]));
      z = (hen[count-1] + hen[count -2] + shen ) /2;
      // cout << sqrt(z*(z-shen)*(z-hen[count-1])*(z-hen[count-2])) << endl;
	sum += sqrt(z*(z-shen)*(z-hen[count-1])*(z-hen[count-2]));
    }
    count ++;
    
  }

 
    
  printf("%.8lf\n",sum);

  return 0;
}
  