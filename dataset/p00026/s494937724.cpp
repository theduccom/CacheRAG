#include <iostream>
#include <cmath>
using namespace std;

int map[10][10] = {{}};

void plot(int x, int y)
{
    if (0<=x && x<10 && 0<=y && y<10)
        ++map[x][y];
}

void small(int x, int y)
{
    plot(x  , y-1);
    plot(x-1, y  );
    plot(x,   y  );
    plot(x+1, y  );
    plot(x,   y+1);
}

void medium(int x, int y)
{
    for (int i = x-1; i <= x+1; ++i)
        for (int j = y-1; j <= y+1; ++j)
            plot(i, j);
}

void big(int x, int y)
{
    medium(x, y);
    plot(x, y-2);
    plot(x-2,y);
    plot(x+2,y);
    plot(x,y+2);
}

int main(void)
{
    int x, y, z;
    char c;
    while(cin >> x >> c >> y >> c >> z) {
        switch (z) {
            case 1:
                small(x, y);
                break;
            case 2:
                medium(x, y);
                break;
            case 3:
                big(x, y);
                break;
        }
    }

    int sum = 0, max = 0;
    for (int i = 0; i < 10; ++i) {
        for(int j = 0; j < 10; ++j) {
            if (map[i][j] == 0) ++sum;
            if (map[i][j] > max) max = map[i][j];
        }
    }
    cout << sum << endl << max << endl;
    return 0;
}

