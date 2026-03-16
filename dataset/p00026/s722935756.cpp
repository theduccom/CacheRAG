#include <bits/stdc++.h>
using namespace std;

/* {{{ */
#define PI(N) ((M_PI * (N)) / 180) //?§???????????????¢??????????????????
#define CL(N) (cout << (N) << endl)
#define DCT(N) (cout << "debug " << (N) << endl)
#define REP(i, N) for (int i = 0; i < (N); i++)
/* }}} */

int dx[] = {1, 0, -1, 0}, dy[] = {0, 1, 0, -1};
int seet[10][10];

void ink(int y, int x)
{
    if (0 <= y && y < 10 && 0 <= x && x < 10) seet[y][x]++;
}

int main()
{
    int x, y, s, zero = 0, m = 0;

    while (scanf("%d,%d,%d", &x, &y, &s) != EOF){

        if (1 <= s){
            ink(y, x);
            REP(i, 4){
                ink(y + dy[i], x + dx[i]);
            }
        }
        if (2 <= s){
           ink(y - 1, x - 1);
           ink(y - 1, x + 1);
           ink(y + 1, x - 1);
           ink(y + 1, x + 1);
        }
        if (3 == s){
            REP(i, 4){
                ink(y + (dy[i] * 2), x + (dx[i] * 2));
            }
        }
    }

    REP(i, 10){
        REP(j, 10){
            if (seet[i][j] == 0){
                zero++;
            }
            m = max(m, seet[i][j]);
        }
    }

    CL(zero);
    CL(m);

    return (0);
}