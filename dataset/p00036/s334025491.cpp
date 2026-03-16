#include <bits/stdc++.h>

using namespace std;

char mp[8][9];

int A[4][2] = {{0, 0}, {0, 1}, {1, 0}, {1, 1}};
int B[4][2] = {{0, 0}, {1, 0}, {2, 0}, {3, 0}};
int C[4][2] = {{0, 0}, {0, 1}, {0, 2}, {0, 3}};
int D[4][2] = {{0, 1}, {1, 0}, {1, 1}, {2, 0}};
int E[4][2] = {{0, 0}, {0, 1}, {1, 1}, {1, 2}};
int F[4][2] = {{0, 0}, {1, 0}, {1, 1}, {2, 1}};
int G[4][2] = {{1, 0}, {1, 1}, {0, 1}, {0, 2}};

int main()
{
    int nyan = 0;
    while (1) {
        int i = 0;
        while (1) {
            int res = scanf("%s", mp[i++]);
            if (res == EOF) return 0;
            if (i == 8) break;
        }

        int cnt;

        for (int i = 0; i < 8; ++i) for (int j = 0; j < 8; ++j) {
            cnt = 0;
            for (int k = 0; k < 4; ++k) {
                int ny = i + A[k][0], nx = j + A[k][1];
                if (ny < 0 || ny >= 8 || nx < 0 || nx >= 8 || mp[ny][nx] == '0') break;
                cnt++;
            }
            if (cnt == 4) {
                puts("A");
                continue;
            }

            cnt = 0;
            for (int k = 0; k < 4; ++k) {
                int ny = i + B[k][0], nx = j + B[k][1];
                if (ny < 0 || ny >= 8 || nx < 0 || nx >= 8 || mp[ny][nx] == '0') break;
                cnt++;
            }
            if (cnt == 4) {
                puts("B");
                continue;
            }

            cnt = 0;
            for (int k = 0; k < 4; ++k) {
                int ny = i + C[k][0], nx = j + C[k][1];
                if (ny < 0 || ny >= 8 || nx < 0 || nx >= 8 || mp[ny][nx] == '0') break;
                cnt++;
            }
            if (cnt == 4) {
                puts("C");
                continue;
            }

            cnt = 0;
            for (int k = 0; k < 4; ++k) {
                int ny = i + D[k][0], nx = j + D[k][1];
                if (ny < 0 || ny >= 8 || nx < 0 || nx >= 8 || mp[ny][nx] == '0') break;
                cnt++;
            }
            if (cnt == 4) {
                puts("D");
                continue;
            }

            cnt = 0;
            for (int k = 0; k < 4; ++k) {
                int ny = i + E[k][0], nx = j + E[k][1];
                if (ny < 0 || ny >= 8 || nx < 0 || nx >= 8 || mp[ny][nx] == '0') break;
                cnt++;
            }
            if (cnt == 4) {
                puts("E");
                continue;
            }

            cnt = 0;
            for (int k = 0; k < 4; ++k) {
                int ny = i + F[k][0], nx = j + F[k][1];
                if (ny < 0 || ny >= 8 || nx < 0 || nx >= 8 || mp[ny][nx] == '0') break;
                cnt++;
            }
            if (cnt == 4) {
                puts("F");
                continue;
            }

            cnt = 0;
            for (int k = 0; k < 4; ++k) {
                int ny = i + G[k][0], nx = j + G[k][1];
                if (ny < 0 || ny >= 8 || nx < 0 || nx >= 8 || mp[ny][nx] == '0') break;
                cnt++;
            }
            if (cnt == 4) {
                puts("G");
                continue;
            }
        }
    }
}