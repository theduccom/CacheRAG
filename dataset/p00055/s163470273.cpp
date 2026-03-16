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
using namespace std;

#define REP(i,n) for(int i=0; i<n; ++i)
#define IREP(it,array) for(vector<int>::iterator it=array.begin(); it!=array.end(); ++it)
#define SREP(it,array) for(vector<string>::iterator it=array.begin(); it!=array.end(); ++it)


int main()
{
  cout.setf(ios::fixed, ios::floatfield);
  cout.precision(10);

  int INF = 1000000;

  double a;
  while(cin>>a){
    cout << (135.0+76)/27 * a << endl;
  }

  return 0;
}