#include <stdio.h>

int main() {
        const int N = 8;
        char mass[N][N + 1];

        while (scanf("%8s", &mass[0]) != EOF) {
                for (int i = 1; i < N; i++) {
                        scanf("%8s", &mass[i]);
                }
                int a, b;
                bool isFind = false;
                for (a = 0; a < N; a++) {
                        for (b = 0; b < N; b++) {
                                if (mass[a][b] == '1') {
                                        isFind = true;
                                        break;
                                }
                        }
                        if (isFind) {
                                break;
                        }
                }
                char ans;
                if (mass[a][b + 1] == '1' && mass[a + 1][b] == '1' &&
                                mass[a + 1][b + 1] == '1') {
                        ans = 'A';
                } else if (mass[a + 1][b] == '1' && mass[a + 2][b] == '1') {
                        ans = 'B';
                } else if (mass[a][b + 1] == '1' && mass[a][b + 2] == '1') {
                        ans = 'C';
                } else if (mass[a + 1][b - 1] == '1' && mass[a + 1][b] == '1') {
                        if (mass[a + 2][b - 1] == '1') {
                                ans = 'D';
                        } else {
                                ans = 'G';
                        }
                } else if (mass[a][b + 1] == '1' && mass[a + 1][b + 1] == '1') {
                        ans = 'E';
                } else if (mass[a + 1][b] == '1' && mass[a + 1][b + 1] == '1') {
                        ans = 'F';
                }
                printf("%c\n", ans);
        }

        return 0;
}