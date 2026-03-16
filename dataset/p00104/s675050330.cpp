#include <cstdio>
#include <cstdlib>
#define rep(i,n) for(i=0;i<(n);++i)
int n, m, i, j, x, y, loop;
char buf[102];
char tile[102][102];
bool visited[102][102];

int main()
{
    while (true) {
        fgets(buf, 102, stdin);
        sscanf(buf, "%d %d", &n, &m);
        if (!(m|n)) break;

        rep(i, n) rep(j, m) visited[i][j] = false;
        rep(i, n) fgets(tile[i], 102, stdin);
        x = y = loop = 0;
        visited[y][x] = true;
        while (tile[y][x] != '.') {
            switch (tile[y][x]) {
                case '>': x++; break;
                case 'v': y++; break;
                case '<': x--; break;
                case '^': y--; break;
            }
            if (visited[y][x]) { loop = 1; break; }
            visited[y][x] = true;
        }
        if (loop) puts("LOOP"); else printf("%d %d\n", x, y);
    }
    return 0;
}