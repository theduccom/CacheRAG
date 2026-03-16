#include <cstdio>
#include <algorithm>
using namespace std;
static const int MAX_N = 1001;
int vegs[MAX_N];

int main()
{
    int n, m, sum;
    for (; ; ) {
        scanf("%d %d", &n, &m);
        if (n == 0 && m == 0) break;
        sum = 0;
        for (int i = 0; i < n; i++) scanf("%d", &vegs[i]);
        sort(vegs, vegs+n, greater<int>());
        for (int i = 0; i < n; i++) {
            if (i % m == m - 1) continue;
            sum+= vegs[i];
        }
        printf("%d\n", sum);
    }
    return 0;
}

