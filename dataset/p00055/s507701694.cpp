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

int main(void){  
  double a[10];
  while(cin >> a[0]){
    double s=a[0];
    for(int i=1; i<10; i++){
      if(i%2==1) a[i] = a[i-1] * 2;
      else a[i] = a[i-1] / 3;
      s += a[i];
    }
    printf("%.8f\n",s);
  }
}