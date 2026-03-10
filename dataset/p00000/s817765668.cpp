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
#define MP make_pair


int main()
{
  cout.setf(ios::fixed, ios::floatfield);
  cout.precision(10);

  int INF = 1000000;

  REP(i,9){
    REP(j,9){
      printf("%dx%d=%d\n", i+1,j+1,(i+1)*(j+1));
    }
  }

  return 0;
}