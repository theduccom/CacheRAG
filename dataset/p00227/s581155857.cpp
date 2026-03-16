#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <string>
#include <cmath>
#include <map>
#include <cstring>

#define REP(i, n) for (int i = 0; i < (n); i++)
#define FOR(i, init, n) for (int i = init; i < (n); i++)
#define ALL(obj) (obj).begin(), (obj).end()
#define RALL(obj) (obj).rbegin(), (obj).rend()
#define Cout(obj) cout << obj << endl
#define Size(obj) (int)(obj).size()
#define fcout cout << fixed << setprecision(10)
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

    int N, M;
    while (cin >> N >> M, N)
    {
        vector<int> p(N);
        REP(i, N) { cin >> p[i]; }

        sort(RALL(p));

        int ans = 0;

        for (int i = 0; i < N;)
        {
            int sum = 0, cnt = 0;

            while (i < N && cnt < M)
            {
                sum += p[i++];
                cnt++;
            }

            if (cnt == M)
            {
                sum -= p[i - 1];
            }

            ans += sum;
        }

        Cout(ans);
    }

    return 0;
}
