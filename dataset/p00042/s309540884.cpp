#include <iostream>
#include <stdio.h>

using namespace std;

constexpr auto MAX_W = 1000;
constexpr auto MAX_N = 10000;

auto W = 0;
auto N = 0;

int value[MAX_N] = {};
int weight[MAX_N] = {};
int dp[MAX_N+1][MAX_W+1] = {};

auto solve() -> void {
    for (auto i = 0; i < N; i++) {
        for (auto j = 0; j <= W; j++) {
            if (j < weight[i]) {
                dp[i + 1][j] = dp[i][j];
            } else {
                dp[i + 1][j] = max(dp[i][j], dp[i][j - weight[i]] + value[i]);
            }
        }
    }
}

auto main(int argc, char const *argv[]) -> int {
    auto count = 0;
    while (cin>>W, W) {
        count++;
        cin>>N;
        for (auto i = 0; i < N; i++) {
            scanf("%d,%d", &value[i], &weight[i]);
        }

        cout<<"Case "<<count<<":"<<endl; 
        solve();
        cout<<dp[N][W]<<endl;
        for(auto i = 0; i <= W; i++) {
            if(dp[N][W] == dp[N][i]) {
                printf("%d\n",i);
                break;
            }
        }
    }

    return 0;
}