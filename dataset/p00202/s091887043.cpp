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
int n;//料理の種類
int x;
int sum;
bool prime[1000001];
int main()
{

  for(int i = 0;i <1000001;i++){
    prime[i] = true;
  }
  prime[0] = false;
  prime[1] = false;
  for(int i = 2;i <1000001;i++){
    if(prime[i]){
      for(int j = 2*i;j <1000001;j+=i){
	prime[j]= false;
      }
    }
  }
  while(cin>>n>>x,n||x){
    bool flag1=false;
    int dish[40];
    bool check[1000001];
    for(int i = 0;i < 1000001;i++){
      check[i]=false;
    }
    for(int i = 0;i < n;i++){
      cin>>dish[i];
    }
    check[0] =true;//0はどの料理からでも作れる
    for(int i = 0;i <=x;i++){
      if(check[i]){
	for(int j = 0;j <n;j++){
	  if(i + dish[j]<=x)
	    check[i+dish[j]] = true;
	}
      }
    }
    int ans = 0;

    for(int i =x;i >0;i--){//上から調べる
      if(check[i]&&prime[i]){
	flag1 = true;
	ans = i;
	break;
      }
    }
    if(flag1)
      cout <<ans<<endl;
    else
      cout <<"NA"<<endl;
  }

  return 0;
}