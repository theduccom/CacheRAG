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
#include <set>
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
    map<string, set<int>> list;
    string s;
    int n;
    while(cin >> s >> n) list[s].insert(n);
    for(auto x : list)
    {
        cout << x.first << endl;
        bool flag = false;
        for(auto p : x.second)
        {
            if(flag) cout << " ";
            cout << p;
            flag = true;
        }
        cout << endl;
    }
    return 0;
}


