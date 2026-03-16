#include <iostream>
#include <string>
#include <vector>
using namespace std;

int dist[21][21];

int main() {
    int n, m;
    char cm;
    cin >> n >> m;
    for (int i=0; i<21; ++i) {
        for (int j=0; j<21; ++j) {
            dist[i][j] = 1e6;
        }
    }
    int a, b, c, d;
    for (int i=0; i<m; ++i) {
        cin >> a >> cm >> b >> cm >> c >> cm >> d;
        dist[a][b] = c;
        dist[b][a] = d;
    }
    int x1, x2, y1, y2;
    cin >> x1 >> cm >> x2 >> cm >> y1 >> cm >> y2;
    for (int k=0; k<21; ++k) {
        for (int i=0; i<21; ++i) {
            for (int j=0; j<21; ++j) {
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }
    cout << y1 - y2 - dist[x1][x2] - dist[x2][x1] << endl;
    return 0;
}