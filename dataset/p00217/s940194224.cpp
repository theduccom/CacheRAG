#include <cstdio>
#include <queue>
#include <algorithm>
using namespace std;

int main()
{
    auto cmp = [](const pair<int, int> &a, const pair<int, int> &b) {
        return a.second < b.second;
    };
    int n, p, d1, d2;
    for (; ;) {
        scanf("%d", &n);
        if (n == 0) break;
        priority_queue<pair<int, int>, vector<pair<int, int> >, decltype (cmp) > pq(cmp);
        for (int i = 0; i < n; i++) {
            scanf("%d %d %d", &p, &d1, &d2);
            pq.push({p, d1+d2});
        }
        printf("%d %d\n", pq.top().first, pq.top().second);
    }

}

