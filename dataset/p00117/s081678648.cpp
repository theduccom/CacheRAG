#include <iostream>
#include <vector>
#include <utility>
#include <cstdio>
using namespace std;

struct Node {
    vector<pair<int, int> > to;
    int cost;
    bool isDone;
};

const int MAX_N = 20;
Node nodes[MAX_N + 1];
int n;

int Dijkstra(int start, int end) {
    for (int i = 1; i <= n; i++) {
        nodes[i].isDone = false;
        nodes[i].cost = -1;
    }
    nodes[start].cost = 0;
    while (true) {
        int min_idx = -1;
        for (int i = 1; i <= n; i++) {
            if (nodes[i].isDone == true || nodes[i].cost < 0) {
                continue;
            }
            if (min_idx < 0 || nodes[i].cost < nodes[min_idx].cost) {
                min_idx = i;
            }
        }
        if (min_idx < 0) {
            break;
        }
        nodes[min_idx].isDone = true;
        for (vector<pair<int, int> >::iterator it = nodes[min_idx].to.begin(); it != nodes[min_idx].to.end(); it++) {
            int to = it->first;
            int cost = nodes[min_idx].cost + it->second;
            if (nodes[to].cost < 0 || cost < nodes[to].cost) {
                nodes[to].cost = cost;
            }
        }
    }
    return nodes[end].cost;
}

int main() {
    int m;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int a, b, c, d;
        scanf("%d,%d,%d,%d", &a, &b, &c, &d);
        nodes[a].to.push_back(make_pair(b, c));
        nodes[b].to.push_back(make_pair(a, d));
    }
    int x1, x2, y1, y2;
    scanf("%d,%d,%d,%d", &x1, &x2, &y1, &y2);
    cout << y1 - y2 - Dijkstra(x1, x2) - Dijkstra(x2, x1) << endl;
}