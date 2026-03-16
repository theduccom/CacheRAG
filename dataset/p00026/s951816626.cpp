#include <cstdio>

using namespace std;

int paper[10][10];

void dropInk(int ary[][2], int size, int x, int y)
{
        int nx, ny;

        for (int i = 0; i < size; i++) {
                nx = x + ary[i][0];
                ny = y + ary[i][1];
                if ((0 <= nx && nx < 10) && (0 <= ny && ny < 10)) {
                        paper[nx][ny]++;
                }
        }
}

int main()
{
        int sm[5][2] = {{-1, 0}, {1, 0}, {0, -1},
                                   {0, 0}, {0, 1}},
                md[9][2] = {{-1, -1}, {-1, 0}, {-1, 1},
                                   {0, -1}, {0, 0}, {0, 1},
                                   {1, -1}, {1, 0}, {1, 1}},
                lr[13][2] = {{-2, 0}, {-1, -1}, {-1, 0}, {-1, 1},
                                        {0, -2}, {0, -1}, {0, 0}, {0, 1}, {0, 2},
                                        {1, -1}, {1, 0}, {1, 1}, {2, 0}};
        int x, y, s;

        for (int i = 0; i < 10; i++) {
                for (int j = 0; j < 10; j++) {
                        paper[i][j] = 0;
                }
        }
        while (scanf("%d%*c%d%*c%d", &x, &y, &s) != EOF) {
                switch (s) {
                case 1:
                        dropInk(sm, 5, x, y);
                        break;
                case 2:
                        dropInk(md, 9, x, y);
                        break;
                default:
                        dropInk(lr, 13, x, y);
                        break;
                }
        }

        int noInk = 0, most = 0;
        for (int i = 0; i < 10; i++) {
                for (int j = 0; j < 10; j++) {
                        if (!paper[i][j]) {
                                noInk++;
                        }
                        else if (paper[i][j] > most){
                                most = paper[i][j];
                        }
                }
        }
        printf("%d\n%d\n", noInk, most);

        return 0;
}