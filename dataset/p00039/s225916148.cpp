#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define ALL(v) v.begin(), v.end()
#define MSG(a) cout << #a << " " << a << endl;
#define REP(i, x, n) for (int i = x; i < n; i++)
#define OP(m) cout << m << endl;
typedef long long ll;
typedef unsigned long long ull;

int main()
{
    string s;
    map<char, int> rom;
    rom['I'] = 1;
    rom['V'] = 5;
    rom['X'] = 10;
    rom['L'] = 50;
    rom['C'] = 100;
    rom['D'] = 500;
    rom['M'] = 1000;
    while (cin >> s)
    {
        int sum = 0;
        for (int i = 0; i < s.size() - 1; i++)
        {
            if (rom[s[i]] < rom[s[i + 1]])
            {
                sum -= rom[s[i]];
            }
            else
            {
                sum += rom[s[i]];
            }
        }
        OP(sum + rom[s[s.size() - 1]])
    }
    return 0;
}
