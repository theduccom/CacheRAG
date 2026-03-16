#include <iostream>
#include <string>
#include <algorithm>
#include <functional>
#include <vector>
#include <utility>
#include <cstring>
#include <iomanip>
#include <numeric>
#include <cmath>
#include <queue>
#include <map>
#include <unordered_set>
using namespace std;
typedef long long ll;
const int INF = 1<<30; 
const int MOD = 1e9 + 7;
const int dy[] = {1, 0, -1, 0};
const int dx[] = {0, 1, 0, -1};
int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n;
    while(cin >> n, n)
    {
        map<int, ll> info;
        bool used[5000] = {};
        vector<int> v(n, 0);
        bool flag = false;
        for(int i = 0; i < n; i++)
        {
            ll p, q; cin >> v[i] >> p >> q;
            info[v[i]] += p * q;
        }
        for(int i = 0; i < n; i++)
        {
            if(used[v[i]]) continue;
            if(info[v[i]] >= 1000000)
            {
                cout << v[i] << endl;
                used[v[i]] = true;
                flag = true;
            }
        }
        if(flag == false) cout << "NA" << endl;
    }
    return 0;
}


