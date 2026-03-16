#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
#include<map>
#include<set>
#include<queue>
#include<cstdio>
#include<climits>
#include<cmath>
#include<cstring>
#include<string>
#include<sstream>

#define f first
#define s second
#define mp make_pair

#define REP(i,n) for(int i=0; i<(int)(n); i++)
#define FOR(i,c) for(__typeof((c).begin()) i=(c).begin(); i!=(c).end(); i++)
#define ALL(c) (c).begin(), (c).end()

using namespace std;

typedef unsigned int uint;
typedef long long ll;

int main(){
  int n;
  cin >> n;
  while(n --> 0){
    int out = 0;
    int run = 0;
    int p = 0;
    while( out < 3 ){
      string str;
      cin >> str;
      if(str == "HIT"){
        run++;
        if(run == 4){
          p++;
          run = 3;
        }
      }else if(str == "OUT"){
        out++;
      }else{
        p += run + 1;
        run = 0;
      }
    }
    cout << p << endl;
  }
  return 0;
}