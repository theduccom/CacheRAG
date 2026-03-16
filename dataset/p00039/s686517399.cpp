#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
using namespace std;

#define REP(i,b,n) for(int i=b;i<(int)n;i++)
#define rep(i,n) REP(i,0,n)
#define foreach(i,c) for(__typeof((c).begin())i=(c).begin();i!=(c).end();i++)

long long res;

int main (int argc, char const* argv[]) {
  string raw;
  string map = "IVXLCDM";
  const int weight[7] = {1,5,10,50,100,500,1000};
  while (cin>>raw) {
    res = 0;
    rep(i,7) rep(j,raw.size()) if (raw[j] == map[i]) {
      raw[j] = '0' + i;
    }
    char prev = '8';
    rep(i,raw.size()) {
      if (prev < raw[i]) {
        res += weight[raw[i] - '0'] - weight[prev - '0'] * 2;
        //puts("why");
      } else {
        res += weight[raw[i] - '0'];
      }
      prev = raw[i];
    }
    cout<<res<<endl;
  }
  return 0;
}