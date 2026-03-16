#include <cstdio>

int m[10][10] = { 0 };

bool inRange(int va) {
    return (0 <= va) && (va < 10);
}

void put(int x, int y, int s) {
    switch (s) {
    case 1:
        m[x][y]++;
        if (inRange(x - 1)) {
            m[x - 1][y]++;
        }
        if (inRange(x + 1)) {
            m[x + 1][y]++;
        }
        if (inRange(y - 1)) {
            m[x][y - 1]++;
        }
        if (inRange(y + 1)) {
            m[x][y + 1]++;
        }
        break;
    case 2:
        for (int i = x - 1; i <= x + 1; ++i) {
            for (int j = y - 1; j <= y + 1; ++j) {
                if (inRange(i) && inRange(j)) {
                    m[i][j]++;
                }
            }
        }
        break;
    case 3:
        put(x, y, 2);
        if (inRange(x - 2)) {
            m[x - 2][y]++;
        }
        if (inRange(x + 2)) {
            m[x + 2][y]++;
        }
        if (inRange(y - 2)) {
            m[x][y - 2]++;
        }
        if (inRange(y + 2)) {
            m[x][y + 2]++;
        }
        break;
    }
}

int main() {
    int inx[100] = { 0 };
    int iny[100] = { 0 };
    int ins[100] = { 0 };
    int c;

    for (c = 0; scanf("%d,%d,%d", &inx[c], &iny[c], &ins[c]) != EOF; ++c) {}

    for (int i = 0; i < c; ++i) {
        put(inx[i], iny[i], ins[i]);
    }

    int mx = 0;
    int counts = 0;
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            int p = m[i][j];
            if (mx < p) {
                mx = p;
            }

            if (p == 0) {
                counts++;
            }
        }
    }

    printf("%d\n%d\n", counts, mx);

    return 0;
}