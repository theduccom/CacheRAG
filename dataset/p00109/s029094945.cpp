#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <time.h>
#include <cctype>
 
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define FFOR(i,a,b) for(int i=(a);i<=(b);i++)
#define REP(i,b) FOR(i,0,b)
#define RREP(i,b) FFOR(i,1,b)
#define PB push_back
#define F first
#define S second
#define BE(c) c.begin(),c.end()
using namespace std;
typedef long long LL;
typedef LL ut;
typedef long double ld;
typedef pair<ut,ut> pr;
typedef vector<pr> Vpr;
typedef vector<ut> VI;
typedef pair<ut,pr> ppr;
typedef priority_queue<pr,Vpr, greater<pr> > PQ;
const int SIZE=1e+5+10;
const ut INF=1<<30;
const ld eps=1e-6;
const LL mod=1e+9 + 7;

typedef string::const_iterator SC;

int factor(SC&);

// ??°????????????
int number(SC& begin){
  int res = 0;

  while(isdigit(*begin)){
    res *= 10;
    res += *begin - '0';
    begin++;
  }

  return res;
}

// ??????
int term(SC& begin){
  int res = factor(begin);

  while(1){
    if(*begin == '*'){
      begin++;
      res *= factor(begin);
    }
    else if(*begin == '/'){
      begin++;
      res /= factor(begin);
    }
    else{
      break;
    }
  }
  return res;
}

// ????????????
int expression(SC& begin){
  int res = term(begin);

  while(1){
    if(*begin == '+'){
      begin++;
      res += term(begin);
    }
    else if(*begin == '-'){
      begin++;
      res -= term(begin);
    }
    else{
      break;
    }
  }
  return res;
}

// ??¬??§?????°????????????
int factor(SC& begin){
  if (*begin == '('){
    begin++;
    int res = expression(begin);
    begin++;
    return res;
  }
  else{
    return number(begin);
  }
}

int main() {
	int n;
	cin >> n;
	string s;
	REP(i,n){
		cin >> s;
		SC begin = s.begin();
		cout << expression(begin) << endl;
	}
	return 0;
}