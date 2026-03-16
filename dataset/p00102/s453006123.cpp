#include <bits/stdc++.h>
using namespace std;

/* {{{ */
#define PI(N) ((M_PI * (N)) / 180) //?§???????????????¢??????????????????
#define CL(N) (cout << (N) << endl)
#define DCT(N) (cout << "debug " << (N) << endl)
#define REP(i, N) for (int i = 0; i < (N); i++)
/* }}} */

int main()
{
    int n;

    while (cin >> n, n){
        int m[11][11], x[11] = {0}, y[11] = {0}, sum = 0;
        REP(i, n){
            REP(j, n){
                cin >> m[i][j];
                x[i] += m[i][j];
                y[j] += m[i][j];
                sum += m[i][j];
            }
        }

        REP(i, n){
            REP(j, n){
                printf("%5d", m[i][j]);
            }
            printf("%5d", x[i]);
            cout << "\n";
        } 

        REP(i, n){
            printf("%5d", y[i]);
        }

        printf("%5d\n", sum);
    }
    return (0);
}