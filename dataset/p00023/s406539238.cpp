#include <algorithm>
#include <map>
#include <vector>
#include <iostream>
#include <sstream>
#include <cstdio>
#include <cstring>
#include <cctype>
#include <cstdlib>
#include <cmath>
#include <string>
#include <queue>
#include <stack>
using namespace std;

#define REP(i,n) for(int i=0; i<n; ++i)
#define IREP(it,array) for(vector<int>::iterator it=array.begin(); it!=array.end(); ++it)
#define SREP(it,array) for(vector<string>::iterator it=array.begin(); it!=array.end(); ++it)
#define MP make_pair
typedef long long LL;
#define EPS (1e-6)
double zero(double d){
  return d < EPS ? 0.0 : d;
}

typedef pair<int,int> P;


int main()
{
  cout.setf(ios::fixed, ios::floatfield);
  cout.precision(7);
  int INF = 1000000;

  int N;
  cin >> N;
  REP(t,N){
    double x1,y1,r1,x2,y2,r2;
    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

    double dis = sqrt( (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2) );
    if( dis > r1+r2 )
      cout << 0 << endl;
    else if( r2 > r1+dis )
      cout << -2 << endl;
    else if( r1 > r2+dis )
      cout << 2 << endl;
    else
      cout << 1 << endl;
  }

  return 0;
}