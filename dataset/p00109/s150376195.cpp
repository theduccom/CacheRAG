#include <bits/stdc++.h>
using namespace std;
#define all(c) (c).begin(),(c).end()
#define rep(i,n) for(int i=0; i<(int)(n); i++)
#define REP(i,m,n) for(int i=(int)(m); i<(int)(n); i++)
#define iter(c) __typeof((c).begin())
#define tr(it,c) for(iter(c) it=(c).begin(); it!=(c).end(); it++)
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define pr(a) cout << (a) << endl
#define PR(a,b) cout << (a) << " " << (b) << endl;
#define F first
#define S second
typedef long long ll;
typedef pair<int,int> P;
const int MAX=1000000001;
const ll MAXL=1000000000000000001LL;
int dx[4]={-1,0,1,0},dy[4]={0,-1,0,1};

string s;
string::iterator p;
int fact();
int term();
int exp();

int fact() {
  int x;
  string num;
  while(isdigit(*p)) {
    num += *p;
    ++p;
  }
  if(num.size()) {
    x = atoi(num.c_str());
  } else {
    ++p;
    x = exp();
    ++p;
  }
  return x;
}
 
int term() {
  int x = fact();
  while(*p == '*' || *p == '/') {
    if(*p == '*') {
      ++p;
      x *= fact();
    } else {
      ++p;
      x /= fact();
    }
  }
  return x;
 
}
 
int exp() {
  int x = term();
  while(*p == '+' || *p == '-') {
    if(*p == '+') {
      ++p;
      x += term();
    } else {
      ++p;
      x -= term();
    }
  }
  return x;
}

int main() {
  int n;
  cin >> n;
  while(n--) {
    cin >> s;
    p = s.begin();
    cout << exp() << endl;
  }
  return 0;
}
