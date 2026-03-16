#include <cstdio>
#include <queue>
using namespace std;

int main()
{
while(true) {
const int dx[] = {-1, 0, 0, 1}, dy[] = {0, -1, 1, 0};
char fld[16][16];
if(scanf("%s", fld + 0) == EOF)
break;
for(int i = 1; i < 12; ++i)
scanf("%s", fld + i);
int ans = 0;
for(int sx = 0; sx < 12; ++sx) {
for(int sy = 0; sy < 12; ++sy) {
if(fld[sx][sy] == '0')
continue;
queue<pair<int, int> > q;
q.push(make_pair(sx, sy));
while(!q.empty()) {
int x = q.front().first, y = q.front().second;
q.pop();
fld[x][y] = '0';
for(int i = 0; i < 4; ++i) {
int nx = x + dx[i], ny = y + dy[i];
if(nx < 0 || ny < 0 || nx >= 12 || ny >= 12)
continue;
if(fld[nx][ny] == '1') {
q.push(make_pair(nx, ny));
fld[nx][ny] = '0';
}
}
}
ans += 1;
}
}
printf("%d\n", ans);
}
return 0;
}