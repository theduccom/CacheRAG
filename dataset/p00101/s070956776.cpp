#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <complex>
#include <cstring>
#include <cstdlib>
using namespace std;

#define REP(i,n) for(int i=0;i<(int)n;++i)
#define FOR(i,c) for(__typeof((c).begin())i=(c).begin();i!=(c).end();++i)
#define ALL(c) (c).begin(), (c).end()

int main() {
  int n;
  cin >> n;
  cin.ignore();
  while(n--) {
    string line;
    getline(cin,line);
    REP(i,line.length()-6) {
      if (line.substr(i,7) == "Hoshino")
        line.replace(i,7,"Hoshina");
    }
    cout << line << endl;
  }
}