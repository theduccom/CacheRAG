#include <cstdio>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

static const int dx4[]={-1, 0, 1, 0}, dy4[]={0, -1, 0, 1};
static const int dx8[]={-1, -1, -1, 0, 0, 1, 1, 1};
static const int dy8[]={-1, 0, 1, -1, 1, -1, 0, 1};

int main() {
    vector<vector<int>> g(10, vector<int>(10));

    while (true) {
        size_t x, y;
        int s;
        if (scanf("%zu, %zu, %d", &x, &y, &s) == EOF)
            break;

        ++g[y][x];
        if (s == 1) {
            for (size_t k=0; k<4; ++k) {
                int X=x+dx4[k], Y=y+dy4[k];
                if (!(0<=X && X<10 && 0<=Y && Y<10))
                    continue;

                ++g[Y][X];
            }
        } else if (s == 2) {
            for (size_t k=0; k<8; ++k) {
                int X=x+dx8[k], Y=y+dy8[k];
                if (!(0<=X && X<10 && 0<=Y && Y<10))
                    continue;

                ++g[Y][X];
            }
        } else if (s == 3) {
            for (size_t k=0; k<8; ++k) {
                int X=x+dx8[k], Y=y+dy8[k];
                if (!(0<=X && X<10 && 0<=Y && Y<10))
                    continue;

                ++g[Y][X];
            }
            for (size_t k=0; k<4; ++k) {
                int X=x+2*dx4[k], Y=y+2*dy4[k];
                if (!(0<=X && X<10 && 0<=Y && Y<10))
                    continue;

                ++g[Y][X];
            }
        }
    }

    pair<size_t, int> res;  // <0, max>
    for (vector<int> &col: g)
        for (int d: col) {
            if (d == 0)
                ++res.first;

            if (res.second < d)
                res.second = d;
        }

    printf("%zu\n", res.first);
    printf("%d\n", res.second);
    return 0;
}
                