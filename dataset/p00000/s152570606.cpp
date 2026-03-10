#include <algorithm>
#include<iostream>
#include<vector>
#include<deque>
#include<queue>
#include<list>
#include<stack>
#include<map>
#include<set>
#include<string>
#include <sstream>
#include<bitset>

#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<limits.h>

using namespace std;
const int INF = 0x7fffffff;

int gcd(int x,int y){
  int mi,ma;
  ma = max(x,y);
  mi = min(x,y);
  if(ma % mi == 0){
    return mi;
  }
  else{
    return gcd(mi,ma % mi);
  }
}

int main(){
  long ii,jj,kk;
  vector<int> a;
  for(ii=1;ii<=9;ii++){
    for(jj=1;jj<=9;jj++){
      cout << ii << "x" << jj << "=" << ii*jj << endl;
    }
  }
  
  return 0;
}

