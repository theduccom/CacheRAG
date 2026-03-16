#include <iostream>
#include <cstdio>

using namespace std;

int paper[14][14] = {0};

void drop(int n, int m, int l)
{
    if ( l == 3 )
    {
        paper[n - 2][m]++;

        paper[n - 1][m - 1]++;
        paper[n - 1][m]++;
        paper[n - 1][m + 1]++;
        
        paper[n][m - 2]++;
        paper[n][m - 1]++;
        paper[n][m]++;
        paper[n][m + 1]++;
        paper[n][m + 2]++;

        paper[n + 1][m - 1]++;
        paper[n + 1][m]++;
        paper[n + 1][m + 1]++;

        paper[n + 2][m]++;

    }
    else if ( l == 2 )
    {
        paper[n - 1][m - 1]++;
        paper[n - 1][m]++;
        paper[n - 1][m + 1]++;
        
        paper[n][m - 1]++;
        paper[n][m]++;
        paper[n][m + 1]++;

        paper[n + 1][m - 1]++;
        paper[n + 1][m]++;
        paper[n + 1][m + 1]++;
    }
    else if( l == 1 )
    {
        paper[n - 1][m]++;

        paper[n][m - 1]++;
        paper[n][m]++;
        paper[n][m + 1]++;

        paper[n + 1][m]++;
    }
    
    return;
}

int n, m, l;

int main()
{
    while (scanf("%d,%d,%d\n", &n, &m, &l) != EOF)
    {

        n += 2;
        m += 2;
        drop(n, m, l);
   /*      printf( "%d %d %d\n", n, m, l );
 */
/* 
        for (int i = 2; i < 12; i++)
        {
            for (int j = 2; j < 12; j++)
            {
                printf(" %d", paper[i][j]);
            }
            printf("\n");
        } */
    }

    int zero = 0, max = 0;
    for (int i = 2; i < 12; i++)
    {
        for (int j = 2; j < 12; j++)
        {
            if (paper[i][j] == 0)
            {
                zero++;
            }
            else if (paper[i][j] > max)
            {
                max = paper[i][j];
            }
        }
    }
    printf("%d\n%d\n", zero, max );
    return 0;
}
