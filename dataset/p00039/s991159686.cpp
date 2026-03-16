#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <cfloat>
#include <map>
#include <utility>
#include <set>
#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <sstream>
#include <fstream>
#include <complex>
#include <stack>
#include <queue>

using namespace std;
typedef long long LL;
typedef pair<int, int> P;
static const double EPS = 1e-5;

#define FOR(i,k,n) for (int i=(k); i<(int)(n); ++i)
#define REP(i,n) FOR(i,0,n)
int toint(char s){
  if(s=='I') return 1;
  if(s=='V') return 5;
  if(s=='X') return 10;
  if(s=='L') return 50;
  if(s=='C') return 100;
  if(s=='D') return 500;
  if(s=='M') return 1000;
}
int main(void){
  string line;
  while(cin>>line){
    int ret=0;
    REP(i,line.size()-1){
      if(toint(line[i+1])-toint(line[i])>0){
        ret -= toint(line[i]);
      }else{
        ret += toint(line[i]);
      }
    }
    ret += toint(line[line.size()-1]);
    cout<<ret<<endl;
  }    
  return 0;
}