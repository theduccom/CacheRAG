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
bool prime[50500];
int ans[50500];
int main()
{
  for(int i = 0;i <=50000;i++){
    prime[i] = true;
  }
  prime[0] =false;
  prime[1] = false;
  for(int i = 2;i*i<=50000;i++){
    if(prime[i]){
      for(int j =i*2;j <=50000;j+=i){
	prime[j] =false;
      }
    }
  }
  vector<int> P;
  for(int i = 2;i <=50000;i++){
    if(prime[i]){
      P.push_back(i);
    }
  }
  for(int i =0;P[i] <=25000;i++){
      for(int j = i;P[j]+P[i] <=50000;j++){
	ans[P[i]+P[j]]++;
	}
  }

  int n;
  while(cin>>n,n){
    cout <<ans[n]<<endl;
  }
  return 0;
}