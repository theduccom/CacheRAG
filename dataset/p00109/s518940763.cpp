#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <algorithm>

using namespace std;

#define rep(i,j) REP((i), 0, (j))
#define REP(i,j,k) for(int i=(j);(i)<(k);++i)
#define between(a,x,b) ((a)<=(x)&&(x)<=(b))
#define F first
#define S second
#define INF 1 << 30

char e[128];
int p;

int exp();
int term();
int fact();

int exp(){
  int ret = term();
  while(e[p] == '+' || e[p] == '-'){
    if(e[p] == '+'){
      p++;
      ret += term();
    }else if(e[p] == '-'){
      p++;
      ret -= term();
    }
  }
  return ret;
}

int term(){
  int ret = fact();
  while(e[p] == '*' || e[p] == '/'){
    if(e[p] == '*'){
      p++;
      ret *= fact();
    }else if(e[p] == '/'){
      p++;
      ret /= fact();
    }
  }
  return ret;
}

int fact(){
  int ret = 0;
  if(e[p] == '('){
    p++;
    ret = exp();
    p++;
  }
  while(isdigit(e[p])){
    ret = ret * 10 + e[p] - '0';
    p++;
  }
  return ret;
}

int main(){
  int n;
  scanf("%d", &n);
  while(n--){
    scanf("%s", e);
    p = 0;
    printf("%d\n", exp());
  }
  return 0;
}