#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <queue>
#include <stack>
#include <string>
#include <vector>
using namespace std;
typedef long long ll;
typedef vector<int> vint;
typedef vector<ll> vll;
typedef pair<int, int> pint;
typedef pair<ll, ll> pll;
#define range(i, a, b) for (int i = a; i < b; ++i)
#define rep(i, n) range(i, 0, n)
const ll INF = 1e10;
#define pb push_back

struct point {
    double x;
    double y;
};
int main()
{
    char c;
    vector<point> P;
    double x, y;
    while (cin >> x >> c >> y) {
        point pnt;
        pnt.x = x;
        pnt.y = y;
        P.pb(pnt);
    }
    double sum = 0;
    int n = P.size();
    range(i, 1, n - 1)
    {
        sum += (P[i].x - P[0].x) * (P[i + 1].y - P[0].y) - (P[i].y - P[0].y) * (P[i + 1].x - P[0].x);
    }
    cout << abs(sum / 2) << endl;
}

