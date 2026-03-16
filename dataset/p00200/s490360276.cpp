#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

constexpr int INF = 1000000000;

using Pair = std::pair<int, int>;

int n, m;
std::vector<Pair> cost[101];
std::vector<Pair> time_[101];

int d[101];
int dijkstra(int st, int gl, std::vector<Pair>* elm) {
    std::fill(d, d + 101, INF);

    d[st] = 0;

    std::priority_queue<Pair, std::vector<Pair>, std::greater<Pair>> queue;

    queue.push({0, st});

    while(!queue.empty()) {
        auto p = queue.top();queue.pop();

        if(p.first > d[p.second]) {
            continue;
        }

        for(int i = 0; i < elm[p.second].size(); ++i) {
            auto e = elm[p.second][i];

            //To, cost

            if (d[e.first] > d[p.second] + e.second) {
                d[e.first] = d[p.second] + e.second;

                queue.push({d[e.first], e.first});
            }
        }
    }

    return d[gl];
}

int main() {
    while(std::cin >> n >> m, n + m) {
        int a, b, c, t;

        for(int i = 0; i < m; ++i) {
            cost[i].clear();
            time_[i].clear();
        }

        for(int i = 0; i < n; ++i) {
            std::cin >> a >> b >> c >> t;

            --a, --b;

            cost[a].push_back({b, c});
            cost[b].push_back({a, c});
            time_[a].push_back({b, t});
            time_[b].push_back({a, t});
        }

        int k;
        std::cin >> k;
        for(int i = 0; i < k; ++i) {
            int p, q, r;

            std::cin >> p >> q >> r;

            if(r == 0) {
                std::cout << dijkstra(p - 1, q - 1, cost) << std::endl;
            }else {
                std::cout << dijkstra(p - 1, q - 1, time_) << std::endl;
            }

        }
    }
}