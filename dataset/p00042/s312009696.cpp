#include <iostream>
#include <algorithm>

using namespace std;

int dp[1001][1001];
int v[1001], w[1001];

int main()
{
    int W, N;
    char t;
    int cnt = 1;

    while(true)
    {
        cin >> W >> N;

        if(W == 0) return 0;

        for (int i = 0; i < N; i++)
        {
            cin >> v[i] >> t >>  w[i];
        }

        for(int i = 0; i <= W; i++) dp[0][i] = 0;

        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j <= W; j++)
            {
                if (j < w[i])
                    dp[i + 1][j] = dp[i][j];
                else
                    dp[i + 1][j] = max(dp[i][j], dp[i][j - w[i]] + v[i]);
            }
        }

        int ans1 = 0, ans2 = 0;

        for(int i = 0; i <= W; i++)
        {
            if(dp[N][i] > ans1)
            {
                ans1 = dp[N][i];
                ans2 = i;
            }
        }

        cout << "Case " << cnt << ":" << endl;
        cout << ans1 << endl << ans2 << endl;
        cnt++;
    }

    return 0;
}
