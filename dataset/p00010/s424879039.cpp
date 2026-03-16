#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>
#include <vector>
#include <set>

using namespace std;
typedef long long LL;
static const double EPS = 1e-9;

#define FOR(i,k,n) for (int i=(k); i<(int)(n); ++i)
#define REP(i,n) FOR(i,0,n) 
#define A (x[1] - x[0])
#define B (y[1] - y[0])
#define C ((x[1]*x[1] - x[0]*x[0] + y[1]*y[1] - y[0]*y[0])/2)
#define D (x[2] - x[1])
#define E (y[2] - y[1])
#define F ((x[2]*x[2] - x[1]*x[1] + y[2]*y[2] - y[1]*y[1])/2)

int main(void){  
  double x[4],y[4];
  int n;
  cin >> n;
  while(n--){
    REP(i,3)
      cin >> x[i] >> y[i] ;
    x[3] = (C*E - B*F)/(A*E - B*D);
    y[3] = (C*D - A*F)/(B*D - A*E);
    printf("%.3f %.3f %.3f\n",x[3],y[3],sqrt((x[3]-x[0])*(x[3]-x[0]) + (y[3] -y[0])*(y[3]-y[0])));
  }
  return 0;
}