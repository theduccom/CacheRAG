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
int func(int n){
  int c5=0, p=1;
  while(pow(5,(double)p)<=n){
    c5 += floor(n/pow(5, (double)p));
  p++;
  }
  return (c5);
}
int main(void){
  int n;
  while(cin>>n,n){
    cout<<func(n)<<endl;
  }
  return 0;
}