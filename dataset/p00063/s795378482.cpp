#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <map>
#include <utility>
#include <set>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <cstring>
#include <functional>

using namespace std;

#define rep(i,n) for((i)=0;(i)<(int)(n);(i)++)
#define foreach(itr,c) for(__typeof((c).begin()) itr=(c).begin();itr!=(c).end();itr++)
inline int in(){ int x; scanf("%d",&x); return x;}

int main(){
  int i,j,k;
  string s;
  int res = 0;

  while(cin >> s){
    string r(s.rbegin(),s.rend());
    if(s == r) res++;
  }
  printf("%d\n",res);


  return 0;
}