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

  int n=0;
  while(cin >> n){
    if(n==0) break;

    int res=0;
    int d = 5;
    while(d<=n){
      res += (n / d);
      d *= 5;
    }

    cout << res << endl;
  }

  return 0;
}