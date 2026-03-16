#include <algorithm>
#include <bitset>
#include <cstdio>
#include <cassert>
#include <cmath>
#include <functional>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <tuple>
#include <utility>
#include <vector>
using namespace std;

typedef int Y;
constexpr Y INF = numeric_limits<Y>::max() / 3;

struct Edge {
    int to;
    Y cost;

    Edge () {}
    Edge(int a,Y b): to(a), cost(b) {}
} ;

struct State {
    int pos;
    Y cost;

    State () {}
    State(int a, Y b): pos(a), cost(b) {}
} ;

class Dijkstra {
public:
    vector<vector<Edge>> graph;
    vector<Y> dist;
    int N;

    Dijkstra() {}

    void init(int n) {
        graph.clear();
        graph.resize(N = n);
        dist.resize(N);
        fill(begin(dist), end(dist), INF);
    }
    
    void add_edge(int from, int to, Y cost) {
        graph[from].push_back(Edge(to, cost));
    }

    void shortest_path_from(int start) {
        static auto y_comparator = [&](const State& a, const State& b) -> bool {
            return a.cost > b.cost;
        };

        priority_queue<State, vector<State>, decltype(y_comparator)> pq(y_comparator);

        fill(begin(dist), end(dist), INF);
        dist[start] = 0;

        pq.push(State(start, 0));

        while (!pq.empty()) {
            State s = pq.top(); pq.pop();
            if (s.cost > dist[s.pos]) {
                continue;
            }

            for (Edge& e: graph[s.pos]) {
                if (e.cost + s.cost < dist[e.to]) {
                    dist[e.to] = e.cost + s.cost;
                    pq.push(State(e.to, dist[e.to]));
                }
            }
        }
    }

} ;

int N, M;
Dijkstra graph;
int s, g, V, P;

int main() {
    scanf("%d%d", &N, &M);
    graph.init(N);
    for (int j = 0; j < M; ++j) {
        int a,b,c,d;
        scanf("%d,%d,%d,%d", &a, &b, &c, &d);
        --a; --b;
        graph.add_edge(a, b, c);
        graph.add_edge(b, a, d);
    }
    scanf("%d,%d,%d,%d", &s, &g, &V, &P);
    --s; --g;

    graph.shortest_path_from(s);
    int d1 = graph.dist[g];
    graph.shortest_path_from(g);
    int d2 = graph.dist[s];

    cout << V - P - d1 - d2 << endl;


    return 0;
}