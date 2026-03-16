#include <cstdio>
#include <algorithm>
using namespace std;

const int MAX_N = 1010;
const int MAX_W = 1010;
int memo[MAX_N][MAX_W];
int W, N, v[MAX_N], w[MAX_N], min_w;

int main()
{
    for(int c = 1; ~scanf("%d", &W) && W; ++c)
    {
        scanf("%d", &N);
        for(int i = 0; i < N; ++i)
            scanf("%d,%d", v+i, w+i);
        fill_n(memo[N], W+1, 0);
        for(int i = N - 1; i >= 0; --i)
            for(int j = 0; j <= W; ++j)
                if(j < w[i])
                    memo[i][j] = memo[i+1][j];
                else
                    memo[i][j] = max(memo[i+1][j], memo[i+1][j-w[i]] + v[i]);
        min_w = W;
        while(memo[0][W] == memo[0][min_w-1])
            --min_w;
        printf("Case %d:\n%d\n%d\n", c, memo[0][W], min_w);
    }
}