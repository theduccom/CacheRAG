#include <bits/stdc++.h>

#define REP(i, n) for (int i = 0; i < (n); i++)
#define FOR(i, init, n) for (int i = init; i < (n); i++)
#define ALL(obj) (obj).begin(), (obj).end()
#define fi first
#define se second

using namespace std;
using ll = long long int;
using P = pair<int, int>;
using T = tuple<int, int, int>;
using edge = struct
{
    int to, cost;
};

const int MOD = 1e9 + 7;
const int iINF = 1e9;
const long long int llINF = 1e18;
const double PI = acos(-1.0);

const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N;
    cin >> N;

    REP(num, N)
    {
        string s1, s2, ans = "";
        cin >> s1 >> s2;

        int len1 = s1.size() - 1;
        int len2 = s2.size() - 1;
        int next = 0;

        int mlen = max(s1.size(), s2.size());

        REP(i, mlen)
        {
            int sum = 0;

            if (0 <= len1)
                sum += s1[len1--] - '0';

            if (0 <= len2)
                sum += s2[len2--] - '0';

            ans = (char)((sum + next) % 10 + '0') + ans;

            if (10 <= sum + next)
                next = 1;
            else
                next = 0;
        }

        if (ans.size() + next <= 80)
            cout << (next == 1 ? "1" : "") << ans << endl;
        else
            cout << "overflow" << endl;
    }

    return 0;
}
