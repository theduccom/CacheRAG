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
#include <cstring>
#include <cmath>

#define rep(i, n) for(int i = 0; i < n; i ++)
#define ALL(T) T.begin(), T.end()
#define mp make_pair
#define pb push_back

using namespace std;

typedef pair<int, int> pii;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<string> vs;

const int INF = 1 << 24;
const string B[4] = {"A", "B", "AB", "O"};

int main(void){
    map<string, int> cnt;
    int n; char c;
    for(string b; cin >> n >> c >> b;) cnt[b] ++;
    rep(i, 4) cout << cnt[B[i]] << endl; 

    return 0;
}