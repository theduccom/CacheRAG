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
  getline(cin,str);
  int k = str.size();
  for(int i = 0;i < k;i++){
    if(str[i]=='p'&&str[i+1]=='e'&&str[i+2]=='a'&&str[i+3]=='c'&&str[i+4]=='h'){
      str[i] ='a';
      str[i+1]='p';
      str[i+2]='p';
      str[i+3]='l';
      str[i+4]='e';
    }else if(str[i]=='a'&&str[i+1]=='p'&&str[i+2]=='p'&&str[i+3]=='l'&&str[i+4]=='e'){
      str[i]='p';
      str[i+1]='e';
      str[i+2]='a';
      str[i+3]='c';
      str[i+4]='h';
    }
  }
  cout <<str<<endl;
  return 0;
}