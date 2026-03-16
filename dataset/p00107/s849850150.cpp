#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define ALL(v) v.begin(), v.end()
#define MSG(a) cout << #a << " " << a << endl;
#define REP(i, x, n) for (int i = x; i < n; i++)
#define OP(m) cout << m << endl
typedef long long ll;
typedef unsigned long long ull;

int main()
{
    vector<double> v(3);
    while (cin >> v[0] >> v[1] >> v[2], v[0])
    {
        int n;
        cin >> n;
        rep(i, n)
        {
            double r;
            cin >> r;
            sort(ALL(v));
            if (sqrt(v[0] * v[0] + v[1] * v[1]) < 2 * r)
                OP("OK");
            else
                OP("NA");
        }
    }

    return 0;
}
