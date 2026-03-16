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
    getline(cin, s);

    while (s.find("apple") != string::npos)
    {
        int a = s.find("apple");
        s.replace(a, 5, "00000");
    }
    while (s.find("peach") != string::npos)
    {
        int p = s.find("peach");
        s.replace(p, 5, "11111");
    }

    while (s.find("00000") != string::npos)
    {
        int a = s.find("00000");
        s.replace(a, 5, "peach");
    }
    while (s.find("11111") != string::npos)
    {
        int p = s.find("11111");
        s.replace(p, 5, "apple");
    }

    OP(s);

    return 0;
}
