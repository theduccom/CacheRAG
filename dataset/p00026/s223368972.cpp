#include <cstdio>
#include <algorithm>
using namespace std;

int field[10][10], x, y, s, cnt, ma;

void s1()
{
    if (y - 1 >= 0) field[x][y-1]++;
    if (x - 1 >= 0) field[x-1][y]++;
    if (y + 1 < 10) field[x][y+1]++;
    if (x + 1 < 10) field[x+1][y]++;
}

void s2()
{
    s1();
    if (x - 1 >= 0 && y - 1 >= 0) field[x-1][y-1]++;
    if (x - 1 >= 0 && y + 1 < 10) field[x-1][y+1]++;
    if (x + 1 < 10 && y - 1 >= 0) field[x+1][y-1]++;
    if (x + 1 < 10 && y + 1 < 10) field[x+1][y+1]++;
}

void s3()
{
    s2();
    if (y - 2 >= 0) field[x][y-2]++;
    if (x - 2 >= 0) field[x-2][y]++;
    if (y + 2 < 10) field[x][y+2]++;
    if (x + 2 < 10) field[x+2][y]++;
}

int main()
{
    while(scanf("%d,%d,%d",&x,&y,&s) != EOF) {
        field[x][y]++;
        if      (s == 1) s1();
        else if (s == 2) s2();
        else if (s == 3) s3();
    }

    for(int i=0;i < 10;++i) {
        for(int j=0;j < 10;++j) {
            if (!field[i][j]) ++cnt;
            else ma = max(ma, field[i][j]);
        }
    }
    printf("%d\n%d\n", cnt, ma);

    return 0;
}