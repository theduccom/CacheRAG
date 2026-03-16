#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <queue>
#include <stack>
#include <string>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <cmath>

#define rep(i, n) for(int i = 0; i < n; i ++)
#define ALL(T) T.begin(), T.end()

using namespace std;

typedef pair<int, int> pii;
typedef unsigned long long ull;

int main(void){
    int a, b, c; cin >> a >> b >> c;
    string res;

    if(a == b && b == (c ? 0:1)) res = "Open";
    else res = "Close";

    cout << res << endl;

    return 0;
}