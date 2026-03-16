#include <iostream>
#include <cstdio>
#include <queue>
#include <vector>
#include <set>
#include <algorithm>
#include <functional>
using namespace std;

const int INF = 1<<28;

struct edge_t {
    int from, to, cost;
    edge_t(int from, int to, int cost) : from(from), to(to), cost(cost) {}
    bool operator<(const edge_t &o) const {
        return (cost < o.cost);
    }
    bool operator>(const edge_t &o) const {
        return (cost > o.cost);
    }
};
struct state_t {
    int v;
    int min_cost;
    state_t(int v, int min_cost) : v(v), min_cost(min_cost) {}
    bool operator<(const state_t &o) const {
        return (min_cost < o.min_cost);
    }
    bool operator>(const state_t &o) const {
        return (min_cost > o.min_cost);
    }
};
typedef vector<edge_t> vertex_t;
struct graph_t {
    vector<vertex_t> g;

    graph_t() {}

    graph_t(int vertex_count) {
        g.resize(vertex_count);
    }
    graph_t(vector<vertex_t> g) : g(g) {}

    inline void add_edge(int from, int to, double cost) {
        g[from].push_back(edge_t(from, to, cost));
    }

    void dijkstra(int s, vector<int> &min_cost) {
        min_cost.resize(g.size());
        priority_queue< state_t, vector<state_t>, greater<state_t> > q;
        
        fill(min_cost.begin(), min_cost.end(), INF);

        min_cost[s] = 0;
        q.push(state_t(s, 0));

        while (!q.empty()) {
            state_t p = q.top(); q.pop();
            int v = p.v;
            if (min_cost[v] < p.min_cost) continue;
            for (int i = 0; i < g[v].size(); i++) {
                edge_t e = g[v][i];
                if (min_cost[e.to] > min_cost[v] + e.cost)  {
                    min_cost[e.to] = min_cost[v] + e.cost;
                    q.push(state_t(e.to, min_cost[e.to]));
                }
            }
        }
    }
};

int main() {
    int n, m;
    cin >> n >> m;
    graph_t graph(n+1);
    for (int i = 0; i < m; i++) {
        int a, b, c, d;
        scanf("%d,%d,%d,%d", &a, &b, &c, &d);
        graph.add_edge(a, b, c);
        graph.add_edge(b, a, d);
    }
    int s, g, init_money, tree_cost;
    scanf("%d,%d,%d,%d", &s, &g, &init_money, &tree_cost);
    int reward = init_money - tree_cost;
    vector<int> min_cost;
    graph.dijkstra(s, min_cost);
    reward -= min_cost[g];
    graph.dijkstra(g, min_cost);
    reward -= min_cost[s];
    cout << reward << endl;
    return 0;
}