#include <iostream>
#include <string>

using namespace std;

string field[8];
int start_x, start_y;

void get_input() {
    for (int i = 0; i < 8; i++) {
        cin >> field[i];
    }
    cin >> start_x; start_x--;
    cin >> start_y; start_y--;
}

int dx[] = {-3, -2, -1,  0,  0,  0, 1, 2, 3, 0, 0, 0};
int dy[] = { 0,  0,  0, -3, -2, -1, 0, 0, 0, 1, 2, 3};

void explode(int x, int y) {
    field[y][x] = '0';
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            int nx = x+dx[i], ny = y+dy[i];
            if (0 <= nx && nx < 8 && 0 <= ny && ny < 8 && field[ny][nx] == '1') {
            //    cout << "x: " << nx << "y: " << ny << endl;
                explode(nx, ny);
            }
        }
    }
}

void output() {
    for (int i = 0; i < 8; i++) {
        cout << field[i] << endl;
    }
}

int main() {
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        get_input();
        cout << "Data " << i+1 << ":" << endl;
        explode(start_x, start_y);
        output();
    }
    return 0;
}