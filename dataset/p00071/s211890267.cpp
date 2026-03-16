#include <cstdio>
#include <algorithm>
#include <queue>
using namespace std;
char imap[8][9];
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};


void bfs(int x, int y) {
    queue <pair<int, pair<int, int> > > q;
    pair <int, pair <int, int> > p;
    int nx, ny;
    imap[x][y] = '0';
    q.push({1, {x, y}});
    while ( ! q.empty() ) {
        p = q.front(); q.pop();
        for (int i = 0; i < 4; i++) {
            nx = p.second.first + (dx[i] * p.first), ny = p.second.second + (dy[i] * p.first);
            if (nx >= 0 && nx < 8 && ny >= 0 && ny < 8 && imap[nx][ny] == '1') {
                q.push({1, {nx, ny}});
                imap[nx][ny] = '0';
            }
        }
        if (p.first < 3) q.push({p.first+1, {p.second.first, p.second.second}});
    }
}

int main(){

    int N, x, y;
    scanf("%d", &N);
    for (int t = 1; t <= N; t++) {
        for (int i = 0; i < 8; i++) {
            scanf("%s", imap[i]);
        }
        scanf("%d %d", &y, &x);
        bfs(x-1, y-1);
        printf("Data %d:\n", t);
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) printf("%c", imap[i][j]);
            printf("\n");
        }
    }
    return 0;
}

