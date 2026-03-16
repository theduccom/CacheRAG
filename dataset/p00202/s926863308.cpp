#include <bits/stdc++.h>

const int MOD = 1e9 + 7;
const int iINF = 1000000000;
const long long int llINF = 1000000000000000000;
const double PI = acos(-1.0);
#define rep(i, n) for (int i = 0; i < (n); i++)

using namespace std;
using ll = long long int;
using P = pair<int, int>;
using T = tuple<int, int, int>;
using edge = struct
{
    int to;
    int cost;
};

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

bool isPrime[1000010];
bool dp[1000010];

void Eratostenes(int N)
{
    rep(i, 1e6 + 1) isPrime[i] = true;

    isPrime[0] = false;
    isPrime[1] = false;

    for(int i = 2; i <= sqrt(N); i++)
    {
        if(isPrime[i])
        {
            for(int j = i * 2; j <= N; j += i)
                isPrime[j] = false;
        }
    }   
}

int main()
{
    int N, X;
    Eratostenes(1000000);   

    while(cin >> N >> X && N)
    {
        vector<int> v(N);
        rep(i, N) cin >> v[i];
        rep(i, X + 1) dp[i] = false;

        dp[0] = true;

        rep(i, N)
        {
            rep(j, X + 1)
            {
                if(!dp[j] || j + v[i] > X) continue;

                dp[j + v[i]] = true;
            }
        }

        int ans = 0;

        rep(i, X + 1)
        {
            if(dp[i] && isPrime[i])
                ans = max(ans, i);
        }

        cout << (ans == 0 ? "NA" : to_string(ans)) << endl;

    }

    return 0;
}
