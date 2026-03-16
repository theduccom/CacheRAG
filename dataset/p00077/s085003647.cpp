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
    string s;
    while (cin >> s)
    {
        string t = "";
        rep(i, s.size())
        {
            if (s[i] == '@')
            {

                t += string(s[i + 1] - '0', s[i + 2]);
                i += 2;
            }
            else
            {
                t += s[i];
            }
        }
        OP(t);
    }
    return 0;
}
