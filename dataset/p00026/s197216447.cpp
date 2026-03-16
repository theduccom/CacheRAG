#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int sx[] = { 0, 0, 1, 0, -1 };
int sy[] = { 0, -1, 0, 1, 0 };
int mx[] = { 0, -1, 0, 1, 1, 1, 0, -1, -1 };
int my[] = { 0, -1, -1, -1, 0, 1, 1, 1, 0 };
int lx[] = { 0, -1, 0, 1, 1, 1, 0, -1, -1, 0, 2, 0, -2 };
int ly[] = { 0, -1, -1, -1, 0, 1, 1, 1, 0, -2, 0, 2, 0 };

int main() {
    int paper[10][10] = { 0 };
    int x, y, s, nx, ny;
    while (scanf("%d,%d,%d", &x, &y, &s) != EOF) {
        if (s == 1) {
            for (int i = 0; i < 5; i++) {
                nx = x + sx[i];
                ny = y + sy[i];
                if (nx < 0 || nx >= 10 || ny < 0 || ny >= 10) {
                    continue;
                }
                paper[ny][nx]++;
            }
        }
        else if (s == 2) {
            for (int i = 0; i < 9; i++) {
                nx = x + mx[i];
                ny = y + my[i];
                if (nx < 0 || nx >= 10 || ny < 0 || ny >= 10) {
                    continue;
                }
                paper[ny][nx]++;
            }
        }
        else {
            for (int i = 0; i < 13; i++) {
                nx = x + lx[i];
                ny = y + ly[i];
                if (nx < 0 || nx >= 10 || ny < 0 || ny >= 10) {
                    continue;
                }
                paper[ny][nx]++;
            }
        }
    }
    
    int none = 0, maxc = 0;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (paper[i][j] == 0) {
                none++;
            }
            maxc = max(maxc, paper[i][j]);
        }
    }
    cout << none << endl << maxc << endl;
    
    return 0;
}