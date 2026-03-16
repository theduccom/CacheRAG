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

typedef pair<double,double> P;

int main()
{
  cout.setf(ios::fixed, ios::floatfield);
  cout.precision(3);
  int INF = 1000000;

  string str;
  while(cin>>str){
    REP(i,str.length()){
      if(str[i] == '@'){
	int num = str[i+1] - '0';
	char ta = str[i+2];
	REP(j,num){
	  cout << ta;
	}
	i+=2;
      }
      else
	cout << str[i];
    }
    cout << endl;
  }

  return 0;
}