#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

#define loop(i,a,b) for(int i=(a); i<(int)(b); i++)
#define rep(i,b) loop(i,0,b)
#define all(c) (c).begin(), (c).end()
 
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> pii;

int main() {
  int n;
  while(cin >> n, n) {
    int f[12][12] = {};
    rep(i, n) {
      rep(j, n) {
        cin >> f[i][j];
        f[i][n] += f[i][j];
        f[n][j] += f[i][j];
        f[n][n] += f[i][j];
      }
    }

    rep(i, n+1) {
      rep(j, n+1) {
        printf("%5d", f[i][j]);
      }
      cout << endl;
    }
  }
}