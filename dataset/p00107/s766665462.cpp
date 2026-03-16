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
    array<int, 3> v{};
    while(cin >> v[0] >> v[1] >> v[2], v[0]){
        int n;
        cin >> n;
        sort(v.begin(),v.end());
        for (int i = 0; i < n; ++i) {
            int r; cin >> r;
            if(v[0]*v[0]+v[1]*v[1] < 4*r*r) puts("OK");
            else puts("NA");
        }
    }
    return 0;
}
