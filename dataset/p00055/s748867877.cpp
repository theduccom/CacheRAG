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
double a[11];
int main()
{
  while(cin>>a[1]){
    a[0] = 0;
    double sum = 0;
    for(int i = 2;i <=10;i++){
      a[i] = 0;
    }
    sum = a[1];
    for(int i = 2;i <= 10;i++){
      if(i%2){
	a[i] =a[i-1]/3;
      }else{
	a[i] =a[i-1]*2;
      }
      sum +=a[i];
    }
    printf("%.8lf\n",sum);
  }
  return 0;
}