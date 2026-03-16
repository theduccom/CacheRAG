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
string str;
int main()
{
  while(cin>>str){
    int ans = 0;
    map<char,int> fig;
    fig['I'] = 1;
    fig['V'] = 5;
    fig['X'] = 10;
    fig['L'] = 50;
    fig['C'] = 100;
    fig['D'] = 500;
    fig['M'] = 1000;
    for(int i = 0;i < str.length();i++){
      if(fig[str[i]] >=fig[str[i+1]]){
	ans +=fig[str[i]];
      }else{
	ans -=fig[str[i]];
      }
    }
    cout <<ans<<endl;
  }	
  return 0;
}