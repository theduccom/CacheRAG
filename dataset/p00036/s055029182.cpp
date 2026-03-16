#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <map>
#include <utility>
#include <set>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <cstring>
#include <functional>

using namespace std;

#define REP(i,a,b) for((i)=(a);(i)<(int)(b);(i)++)
#define rep(i,n) REP(i,0,n)
// BEGIN CUT HERE
#define foreach(itr,c) for(typeof((c).begin()) itr=(c).begin();itr!=(c).end();itr++)
template<class T> inline string toString(T x){ostringstream sout;sout<<x;return sout.str();}
// END CUT HERE

inline bool domain(int i, int j){
  if(i < 8 && j < 8 && 0 <= i && 0 <= j) return true;
  else return false;
}

int main(){
  int i,j,k,n;
  vector<string> in(8);

  while(cin >> in[0] >> in[1] >> in[2] >> in[3] >> in[4] >> in[5] >> in[6] >> in[7]){
    rep(i,in.size()) rep(j,in[i].size()){
      if(in[i][j] == '1'){
        if(domain(i+1,j) && in[i+1][j] == '1' &&
           domain(i,j+1) && in[i][j+1] == '1' &&
           domain(i+1,j+1) && in[i+1][j+1] == '1'){
          cout << "A" << endl;
        }

        if(domain(i+1,j) && in[i+1][j]  == '1' &&
           domain(i+2,j) && in[i+2][j] == '1' &&
           domain(i+3,j) && in[i+3][j] == '1' ){
          cout << "B" << endl;
        }

        if(domain(i,j+1) && in[i][j+1] == '1' &&
           domain(i,j+2) && in[i][j+2] == '1' &&
           domain(i,j+3) && in[i][j+3] == '1' ){
          cout << "C" << endl;
        }

        if(domain(i+1,j) && in[i+1][j] == '1' &&
           domain(i+1,j-1) && in[i+1][j-1] == '1' &&
           domain(i+2,j-1) && in[i+2][j-1] == '1' ){
          cout << "D" << endl;
        }

        if(domain(i,j+1) && in[i][j+1] == '1' &&
           domain(i+1,j+1) && in[i+1][j+1] == '1' &&
           domain(i+1,j+2) && in[i+1][j+2] == '1' ){
          cout << "E" << endl;
        }

        if(domain(i+1,j) && in[i+1][j] == '1' &&
           domain(i+1,j+1) && in[i+1][j+1] == '1' &&
           domain(i+2,j+1) && in[i+2][j+1] == '1' ){
          cout << "F" << endl;
        }

        if(domain(i,j+1) && in[i][j+1] == '1' &&
           domain(i+1,j) && in[i+1][j] == '1' &&
           domain(i+1,j-1) && in[i+1][j-1] == '1' ){
          cout << "G" << endl;
        }
      }
    }
  }

  return 0;
}