#include <iostream>

using namespace std;

string field[8];
int dx[] = {0, 1, 0, -1}, dy[] = {-1, 0, 1, 0};
void rec(int x, int y)
{
    field[y][x] = '0';
    for (int k = 0; k < 4; k++) {
        for (int a = 1; a <= 3; a++) {
            int nx = x + dx[k] * a, ny = y + dy[k] * a;
            if (nx >= 0 && nx < 8 && ny >= 0 && ny < 8 && field[ny][nx] == '1') {
                rec(nx, ny);
            }
        }
    }
}

int main()
{
    int T;
    scanf("%d", &T);
    for (int tc = 1; tc <= T; tc++) {
        for (int y = 0; y < 8; y++)
            cin >> field[y];
        int sx, sy;
        scanf("%d %d", &sx, &sy);
        rec(sx - 1, sy - 1);
        cout << "Data " << tc << ":" << endl;
        for (int y = 0; y < 8; y++)
            cout << field[y] << endl;
    }
}