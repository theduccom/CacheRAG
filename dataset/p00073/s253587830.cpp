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
  cout.precision(6);

  int INF = 1000000;

  int x,h;
  while(cin >> x >> h){
    if(x==0&&h==0) break;
    double res = pow((double)x,2);
    double height = sqrt( pow((double)x/2,2) + pow((double)h,2));
    res += x * height / 2 * 4;
    cout << res << endl;
  }

  return 0;
}