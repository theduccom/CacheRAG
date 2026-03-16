#include <bits/stdc++.h>
using namespace std;

/* {{{ */
#define PI(N) (M_PI * (N)) / 180 //?§???????????????¢??????????????????
#define CL(N) cout << (N) << endl
#define DCT(N) cout << "debug " << (N) << endl
#define REP(i, N) for (int i = 0; i < (N); i++)
/* }}} */

int main()
{
    int l, a, sum_angle = 90;
    double x, y;

    x = y = 0.0;

    while (scanf("%d,%d", &l, &a), l || a){
        x += l * cos(PI(sum_angle));
        y += l * sin(PI(sum_angle));

        sum_angle = (sum_angle - a) % 360;
    }

    CL((int)x);
    CL((int)y);

    return (0);
}