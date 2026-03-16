#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <string>
#include <sstream>
#include <stack>
#include <iomanip>
#include <numeric>
#include <queue>
#include <climits>
#include <set>
#include <complex>
#include <cmath>
#include <cstring>
#include <map>
using namespace std;
using ll = long long;
#define MOD 1000000007
#define INF 1LL << 59

double x[1010], y[1010];
int main()
{
    //std::ios::sync_with_stdio(false);
    //std::cin.tie(0);
    cout << fixed << setprecision(3);

    string s;
    while (cin >> s)
    {
        int n = s.size();
        string ans = "";
        for (int i = 0; i < n; ++i)
        {
            if (s[i] == '@')
            {
                i++;
                for (int j = 0; j < s[i] - '0'; ++j)
                {
                    ans += s[i + 1];
                }
                i++;
            }
            else
            {
                ans += s[i];
            }
        }
        cout << ans << endl;
    }
    return 0;
}
