#include <iostream>

using namespace std;

int paper[10][10];

void init() {
    for (int i = 0; i < 10; i++) 
        for (int j = 0; j < 10; j++) 
            paper[i][j] = 0;
}

void drop_small(int x, int y) {
    paper[y][x]++;
    int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};
    for (int i = 0; i < 4; i++) {
        if (y + dy[i] >= 10 || x + dx[i] >= 10) continue;
        if (y + dy[i] < 0  || x + dx[i] < 0 ) continue;
        paper[ y+dy[i] ][ x+dx[i] ]++;
    }
}

void drop_middle(int x, int y) {
    drop_small(x, y);
    int dx[4] = {1, 1, -1, -1}, dy[4] = {1, -1, 1, -1};
    for (int i = 0; i < 4; i++) {
        if (y + dy[i] >= 10 || x + dx[i] >= 10) continue;
        if (y + dy[i] < 0  || x + dx[i] < 0 ) continue;
        paper[ y+dy[i] ][ x+dx[i] ]++;
    }
}
    
void drop_large(int x, int y) {
    drop_middle(x, y);
    int dx[4] = {2, 0, -2, 0}, dy[4] = {0, 2, 0, -2};
    for (int i = 0; i < 4; i++) {
        if (y + dy[i] >= 10 || x + dx[i] >= 10) continue;
        if (y + dy[i] < 0  || x + dx[i] < 0 ) continue;
        paper[ y+dy[i] ][ x+dx[i] ]++;
    }
}

int main() {
    init();
    int x, y, s;
    char d;
    while (cin >> x >> d >> y >> d >> s) {
        switch (s) {
            case 1:
                drop_small(x, y);
                break;
            case 2:
                drop_middle(x, y);
                break;
            case 3:
                drop_large(x, y);
                break;
        }
    }

    int most = 0;
    int clean = 0;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (paper[i][j] == 0) clean++;
            if (paper[i][j] > most) most = paper[i][j];
        }
    }

    cout << clean << endl;
    cout << most << endl;
    
    return 0;
}