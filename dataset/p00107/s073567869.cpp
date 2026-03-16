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
#include <set>
using namespace std;

#define REP(i,n) for(int i=0; i<n; ++i)
#define IREP(it,array) for(vector<int>::iterator it=array.begin(); it!=array.end(); ++it)
#define PREP(it,array) for(vector<P>::iterator it=array.begin(); it!=array.end(); ++it)
#define SREP(it,array) for(vector<string>::iterator it=array.begin(); it!=array.end(); ++it)

#define MP       make_pair
#define PB       push_back
#define ALL(x)   (x).begin(),(x).end()

const int INF = 1<<29;
const double EPS = 1e-9;
double zero(double d){
  return d < EPS ? 0.0 : d;
}

typedef long long LL;
typedef pair<int,int> P;

int main()
{
  cout.setf(ios::fixed, ios::floatfield);
  cout.precision(7);

  int a[3];
  while(cin>>a[0]>>a[1]>>a[2],a[0]|a[1]|a[2]){
    sort(a,a+3);
    int m1 = a[0];
    int m2 = a[1];
    double t = sqrt( a[0]*a[0] + a[1]*a[1] );

    int n;
    cin>>n;
    REP(i,n){
      int s;
      cin>>s;
      if( s*2 <= t )
	cout << "NA" << endl;
      else
	cout << "OK" << endl;
    }
  }

  return 0;
}