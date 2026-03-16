#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>

#include <iostream>
#include <complex>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>

#include <functional>
#include <cassert>

typedef long long ll;
using namespace std;

#define debug(x) cerr << __LINE__ << " : " << #x << " = " << (x) << endl;

#define mod 1000000007 //1e9+7(prime number)
#define INF 1000000000 //1e9
#define LLINF 2000000000000000000LL //2e18
#define SIZE 100010

int term(char* &s);
int number(char* &s);
int factor(char* &s);
int expr(char* &s);


//数
int number(char* &s){
  int res = 0;

  while('0' <= *s && *s <= '9')
    res = res*10 + (*s++ - '0');

  return res;
}


//乗算除算
int term(char* &s){
  int res = factor(s);

  while(1){
    if(*s == '*') res *= factor(++s);
    else if(*s == '/') res /= factor(++s);
    else break;
  }

  return res;
}

//式
int expr(char* &s){
  int res = term(s);

  while(1){
    if(*s == '+') res += term(++s);
    else if(*s == '-') res -= term(++s);
    else break;
  }

  return res;
}

//括弧か数
int factor(char * &s){
  if(*s != '(') return number(s);
  int res = 0;  
  res = expr(++s); s++;
  return res;
}




int main(){
  int n;

  scanf("%d", &n);

  while(n--){
    char s[SIZE];
    cin >> s;
    for(int i=0;i<n;i++) if(s[i] == '=') s[i] = '\0';
    char *p = s;
    cout << expr(p) << endl;
  }
  
  return 0;
}

