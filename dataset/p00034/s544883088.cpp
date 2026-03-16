#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <functional>
#include <string>
#include <algorithm>
#include <climits>
#include <utility>

#define PRINT(STR) cout << STR << endl;
#define REP(i, n) for (int (i) = 0; (i) < (int)(n); (i)++)
#define REG(i, a, b) for (int (i) = ((int)(a)); (i) < ((int)(b)); i++)
#define ALL(V) (V).begin(), (V).end()
#define SPACE " "

typedef long long ll;

using namespace std;

int nextInt() { int n = -1; cin >> n; return n; }
double nextDouble() { double d = -1; cin >> d; return d; }
ll nextll() { ll n = -1; cin >> n; return n; }
string nextString() { string str; cin >> str; return str; }

int INF = 1LL << 25;
double EPS = 1e-9;
int numofbits(int bits)
{
    bits = (bits & 0x55555555) + (bits >> 1 & 0x55555555);
    bits = (bits & 0x33333333) + (bits >> 2 & 0x33333333);
    bits = (bits & 0x0f0f0f0f) + (bits >> 4 & 0x0f0f0f0f);
    bits = (bits & 0x00ff00ff) + (bits >> 8 & 0x00ff00ff);
    return (bits & 0x0000ffff) + (bits >>16 & 0x0000ffff);
}

// BEGIN //////////////////////////////////////////////////////////////
int main() {
    int ls[10];
    int v1,v2;
    while (scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d",
      ls, ls+1, ls+2, ls+3, ls+4, ls+5, ls+6, ls+7, ls+8, ls+9, &v1, &v2) != EOF) {
        int l_sum = 0;
        REP(i, 10) {
          l_sum += ls[i];
        }
        double l = (double)v1 * l_sum / (v1 + v2);
        REP(i, 10) {
          l -= ls[i];
          if (l <= 0) {
            PRINT(i + 1);
            break;
          }
        }
    }

	return 0;
}
// END   //////////////////////////////////////////////////////////////