#include <vector>
#include <cstdio>

using std::vector;

typedef struct bomb {
        int x;
        int y;
} bomb;

int main() {
        const int N = 8;
        int num;
        int mass[N][N];
        vector<bomb> bv;
        char s[9];

        scanf("%d", &num);
        for (int n = 0; n < num; n++) {
                for (int i = 0; i < N; i++) {
                        scanf("%s", s);
                        for (int j = 0; j < 8; j++) {
                                mass[i][j] = s[j]-'0';
                        }
                }
                bomb first;
                scanf("%d", &first.x);
                scanf("%d", &first.y);
                first.x--; first.y--;
                bv.push_back(first);
                while (!bv.empty()) {
                        int x = bv.front().x, y = bv.front().y;
                        mass[y][x] = 0;
                        for (int dx = -3; dx <= 3; dx++) {
                                if (x+dx < 0 || x+dx >= N) {
                                        continue;
                                }
                                if (mass[y][x+dx] == 1) {
                                        bomb b;
                                        b.x = x+dx;
                                        b.y = y;
                                        bv.push_back(b);
                                }
                        }
                        for (int dy = -3; dy <= 3; dy++) {
                                if (y+dy < 0 || y+dy >= N) {
                                        continue;
                                }
                                if (mass[y+dy][x] == 1) {
                                        bomb b;
                                        b.x = x;
                                        b.y = y+dy;
                                        bv.push_back(b);
                                }
                        }
                        bv.erase(bv.begin());
                }

                printf("Data %d:\n", n+1);
                for (int i = 0; i < N; i++) {
                        for(int j = 0; j < N; j++) {
                                printf("%d", mass[i][j]);
                        }
                        printf("\n");
                }
        }

        return 0;
}