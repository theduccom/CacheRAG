#include <set>
#include <map>
#include <list>
#include <queue>
#include <stack>
#include <cmath>
#include <ctype.h>
#include <ctime>
#include <cstdio>
#include <vector>
#include <string>
#include <bitset>
#include <cctype>
#include <cstdlib>
#include <cstring>
#include <utility>
#include <numeric>
#include <complex>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <cassert>
#include <iostream>
#include <iterator>
#include <algorithm>

using namespace std;

#define REP(i, x, n) for(int i = x; i < n; i++)
#define rep(i, n) REP(i, 0, n)
#define lengthof(x) (sizeof(x) / sizeof(*(x)))
#define FILL(ptr, value) FILL_((ptr), sizeof(ptr)/sizeof(value), (value))
template <typename T>
void FILL_(void * ptr, size_t size, T value){
  std::fill((T*)ptr, (T*)ptr+size, value);
}
//4方向ベクトル→↑←↓
int dx[] ={1,0,-1,0};
int dy[] ={0,-1,0,1};
double tanka,ryou;
double sum,heikin;
int main()
{
  sum = 0;
  heikin = 0;
  double cnt = 0;
  while(scanf("%lf,%lf",&tanka,&ryou) !=EOF){
    cnt++;
    sum += tanka*ryou;
    heikin +=ryou;
  }
  heikin /=cnt;
  heikin +=0.5;
  heikin =(int)heikin;
  cout <<sum<<endl;
  cout <<heikin<<endl;
  
  return 0;
}