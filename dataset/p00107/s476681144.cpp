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
using ld = long double;

bool operator<(const pair<int, int> &a, const pair<int, int> &b)
{
    if (a.first == b.first)
    {
        return b.second > a.second;
    }
    return a.first < b.first;
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    //cout << fixed << setprecision(5);

    double d, w, h;
    while (cin >> d >> w >> h)
    {
        if (d == 0 && w == 0 && h == 0)
            break;

        double dist = min({sqrt(h * h + w * w) / 2.0, sqrt(h * h + d * d) / 2.0, sqrt(w * w + d * d) / 2.0});
        int n;
        cin >> n;
        for (int i = 0; i < n; ++i)
        {
            double r;
            cin >> r;
            if (r > dist)
            {
                cout << "OK" << endl;
            }
            else
                cout << "NA" << endl;
        }
    }
    return 0;
}
