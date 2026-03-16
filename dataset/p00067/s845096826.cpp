#include<stdio.h>
char island[15][15];
int dx[] = {0,1,-1,0};
int dy[] = {1,0,0,-1};
int count=0;

void check(int a, int b)
{
    int c,d, i;
    island[a][b] = 0;
    for(i = 0; i < 4; i++)
    {
        c = dx[i] + b;
        d = dy[i] + a;
        if(0 <= c && c < 12 && 0 <= d && d < 12 && island[d][c] == '1')
        {
            check(d,c);
        }
    }
}

int main()
{
    while(1)
    {
        int i, j;
        for(i = 0; i < 12; i++)
        {
            for(j = 0; j < 12; j++)
            {
                if (scanf(" %c", &island[i][j]) == EOF) return 0;
            }
        }
        /*
        for(i = 0; i < 12; i++)
        {
            for(j = 0; j < 12; j++)
            {
                printf("%c", island[i][j]);
            }
            puts("");
        }**/
        
        for(i = 0; i < 12; i++)
        {
            for(j = 0; j < 12; j++)
            {
                if(island[i][j] == '1')
                {
                    check(i,j);
                    count++;
                }
            }
        }
        printf("%d\n",count);
        count = 0;
    }

}