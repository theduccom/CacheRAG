#include <bits/stdc++.h>

using namespace std;

const int INF = 1 << 24;

struct Node {
    int dist, time;
    Node(int d, int t) : dist(d), time(t) {}
};

int main() {

    int n, m, a, b, d, t;
    int k, p, q, r;


    while(cin >> n >> m, n | m) {

        vector<vector<Node> > node(100, vector<Node>(100, Node(INF, INF)));

        for(int i = 0; i < m; ++i) {
            node[i][i].dist = 0;
            node[i][i].time = 0;
        }

        for(int i = 0; i < n; ++i) {
            cin >> a >> b >> d >> t;
            --a;
            --b;
            node[a][b].dist = d;
            node[a][b].time = t;
            node[b][a].dist = d;
            node[b][a].time = t;
        }

        for(int i = 0; i < m; ++i) {
            for(int j = 0; j < m; ++j) {
                for(int k = 0; k < m; ++k) {
                    node[j][k].dist = min(node[j][k].dist, node[j][i].dist + node[i][k].dist);
                    node[j][k].time = min(node[j][k].time, node[j][i].time + node[i][k].time);
                }
            }
        }

        cin >> k;

        for(int i = 0; i < k; ++i) {
            cin >> p >> q >> r;
            --p;
            --q;
            if(r == 0) {
                cout << node[p][q].dist << endl;
            } else {
                cout << node[p][q].time << endl;
            }
        }

    }

}