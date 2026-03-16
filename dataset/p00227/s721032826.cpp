#include <iostream>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <numeric>
#include <bitset>
#include <cmath>

static const int MOD = 1000000007;
using ll = long long;
using u32 = unsigned;
using u64 = unsigned long long;
using namespace std;

template<class T> constexpr T INF = ::numeric_limits<T>::max()/32*15+208;

int main() {
    int n, m;
    while(cin >> n >> m, n){
        vector<int> v(n);
        for (auto &&i : v) scanf("%d", &i);
        sort(v.begin(),v.end(), greater<>());
        int ans = accumulate(v.begin(),v.end(), 0);
        for (int i = m-1; i < n; i += m) {
            ans -= v[i];
        }
        cout << ans << "\n";
    }
    return 0;
}
