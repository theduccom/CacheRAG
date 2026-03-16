
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <string>
#include <cstring>
#include <deque>
#include <list>
#include <queue>
#include <stack>
#include <vector>
#include <utility>
#include <algorithm>
#include <map>
#include <set>
#include <complex>
#include <cmath>
#include <limits>
#include <cfloat>
#include <climits>
#include <ctime>
#include <cassert>
#include <numeric>
#include <fstream>
#include <functional>
#include <bitset>

using namespace std;
#define int long long int
const int INF = 1001001001001001LL;
const int MOD = 1000000007;

int di[] = {-1, 0, 1, 0, -1, 1, 1, -1};
int dj[] = {0, 1, 0, -1, 1, 1, -1, -1};

const int MAXN = 1001024;

// 結果を格納する変数
int prime[MAXN]; // n 以下の素数のうち i 番目の素数
bool is_prime[MAXN]; // 整数 i が素数であるかどうか

int sieve(int n) {
    int res = 0;
    fill(is_prime, is_prime + MAXN, true);
    is_prime[0] = is_prime[1] = false; // 0 と 1 は素数ではない。
    for(int i = 2; i <= n; ++i) {
        if(!is_prime[i]) continue;
        prime[res++] = i;
        for(int j = 2 * i; j <= n; j += i) is_prime[j] = false; // 素数 i の倍数は素数ではない (ふるい(篩)にかける)
    }
    return res;
}


signed main(){

    sieve(200000);
    while(1){
        int n; cin >> n;
        if(!n) break;
        int ans = 5;
        int i = 1;
        while(1){
            if(prime[i] > n) break;
            if(is_prime[prime[i] - 2]){
                ans = prime[i];
            }
            i++;
        }
        cout << ans - 2 << " " << ans << endl;
    }
    return 0;
}

