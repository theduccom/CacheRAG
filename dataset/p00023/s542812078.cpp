#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

#define loop(i,a,b) for(int i=(a); i<(int)(b); i++)
#define rep(i,b) loop(i,0,b)
#define all(c) (c).begin(), (c).end()
 
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> pii;

int main() {
  int n; cin >> n;
  while(n--) {
    double xa, ya, ra, xb, yb, rb;
    cin >> xa >> ya >> ra >> xb >> yb >> rb;
    double d = sqrt((xb-xa)*(xb-xa) + (yb-ya)*(yb-ya));

    int ans;
    if(d > ra+rb) ans = 0;
    else if(ra > d+rb) ans = 2;
    else if(rb > d+ra) ans = -2;
    else ans = 1;
    cout << ans << endl;
  }
}