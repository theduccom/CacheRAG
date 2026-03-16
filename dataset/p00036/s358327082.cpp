#include <iostream>
#include <algorithm>
#include <complex>
using namespace std;
typedef complex<int> P;
const int N = 8;

const P s[7][4] = {{P(0,0),P(1,0),P(0,1),P(1,1)},
		   {P(0,0),P(0,1),P(0,2),P(0,3)},
		   {P(0,0),P(1,0),P(2,0),P(3,0)},
		   {P(1,0),P(0,1),P(1,1),P(0,2)},
		   {P(0,0),P(1,0),P(1,1),P(2,1)},
		   {P(0,0),P(0,1),P(1,1),P(1,2)},
		   {P(1,0),P(2,0),P(0,1),P(1,1)}};

char g[N][N];

int main() {
  while(cin >> g[0][0]) {
    for(int i = 0; i < N; ++i) {
      for(int j = 0; j < N; ++j) {
	if(!i&&!j) continue;
	cin >> g[i][j];
      }
    }
    int res = -1;
    for(int n = 0; n < 7; ++n) {
      bool flag = true;
      for(int i = 0; i < N; ++i) {
	for(int j = 0; j < N; ++j) {
	  for(int k = 0; k < 4; ++k) {
	    int ni = i + s[n][k].imag();
	    int nj = j + s[n][k].real();
	    if(ni < 0 || ni >= N ||
	       nj < 0 || nj >= N ||
	       g[ni][nj] != '1') {
	      k = (1<<28);
	    }
	    if(k+1 == 4) {
	      res = n;
	      n = i = j = k = (1<<28);
	    }
	  }
	}
      }
    }
    cout << (char)(res+'A') << endl;
  }
  return 0;
}