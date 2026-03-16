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
    cout << fixed << setprecision(8);
    double a;
    while(cin >> a)
    {
        vector<double> v;
        v.push_back(0);
        v.push_back(a);
        for(int i = 2; i <= 10; i++)
        {
            if(i % 2 == 0) v.push_back(v[i - 1] * 2);
            else v.push_back(v[i - 1] / 3);
        }
        double ans = 0;
        for(int i = 0; i < v.size(); i++) ans += v[i];
        cout << ans << "\n";
    }
    return 0;
}


