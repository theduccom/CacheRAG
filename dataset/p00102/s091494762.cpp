#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int n;

    while (cin >> n) {
        if (!n)
            break;

        int tmp;
        int mat[11][11];

        for (int i = 0; i < 11; i++)
            for (int j = 0; j < 11; j++)
                mat[i][j] = 0;


        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> tmp;
                mat[i][j] = tmp;
                mat[i][n] += tmp;
                mat[n][j] += tmp;
            }
        }

        for (int i = 0; i <= n; i++) {
            for (int j = 0; j <= n; j++) {
                if (j == n && i != n)
                    mat[n][n] += mat[i][j];
                printf("%5d", mat[i][j]);
            }
            putchar('\n');
        }
    }
    
    return 0;
}