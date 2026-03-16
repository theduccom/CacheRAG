// Name: Traveling Alone: One-way Ticket of Youth
// Level: 2
// Category: グラフ,Graph,最短経路,Warshall-Floyd
// Note:

/**
 * 最小金額と最短時間のそれぞれについて、Warshall-Floydで前処理しておけばよい。
 * オーダーは O(M^3 + K)。
 */
#include <iostream>
#include <vector>

using namespace std;

bool solve() {
    int N, M;
    if(!(cin >> N >> M)) return false;
    if(!N && !M) return false;

    vector<vector<int>> cost(M, vector<int>(M, -1));
    vector<vector<int>> dist(M, vector<int>(M, -1));
    for(int i = 0; i < N; ++i) {
        int a, b, c, t;
        cin >> a >> b >> c >> t;
        --a; --b;
        cost[a][b] = cost[b][a] = c;
        dist[a][b] = dist[b][a] = t;
    }
    for(int k = 0; k < M; ++k) {
        for(int i = 0; i < M; ++i) {
            for(int j = 0; j < M; ++j) {
                if(cost[i][k] != -1 && cost[k][j] != -1 && (cost[i][j] == -1 || cost[i][k]+cost[k][j] < cost[i][j])) {
                    cost[i][j] = cost[i][k] + cost[k][j];
                }
                if(dist[i][k] != -1 && dist[k][j] != -1 && (dist[i][j] == -1 || dist[i][k]+dist[k][j] < dist[i][j])) {
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }
    int K;
    cin >> K;
    while(K--) {
        int a, b, c;
        cin >> a >> b >> c;
        --a; --b;
        if(c == 0) {
            cout << cost[a][b] << endl;
        } else {
            cout << dist[a][b] << endl;
        }
    }
    return true;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    while(solve()) ;
    return 0;
}