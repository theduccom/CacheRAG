#include <iostream>
#include <string>

using namespace std;

string field[12];

int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};
void crash_island(int y, int x) {
    field[y][x] = '0';
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx < 0) continue;
        if (ny < 0) continue;
        if (12 <= nx) continue;
        if (12 <= ny) continue;
        if (field[ny][nx] == '1') {
            crash_island(ny, nx);
        }
    }
}

int solve() {
    int count = 0;
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            if (field[i][j] == '1') {
                crash_island(i, j);
//                cout << "i: " << i << endl;
//                for (int i = 0; i < 12; i++) {
//                    cout << field[i] << endl;
//                }
                count++;
            }
        }
    }
    return count;
}

int main() {
    while (cin >> field[0]) {
        for (int i = 1; i < 12; i++) {
            cin >> field[i];
        }  
        cout << solve() << endl;
    }
    return 0;
}