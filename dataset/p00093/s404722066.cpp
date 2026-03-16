#include<cstdio>

using namespace std;

int a, b;

int main()
{
    int num = 0;
    while (1)
    {
        scanf("%d %d\n", &a, &b);
        if (a == 0 && b == 0) break;
        if( num )
        {
            printf("\n");
        }
        num++;
        bool Na = 1;
        for (int i = a; i <= b; i++)
        {
            bool out = 1;
            if( i % 4 == 0 )
            {
                if( i % 100 == 0 )
                {
                    if( i % 400 == 0 )
                    {
                        out = 1;
                    }
                    else
                    {
                        out = 0;
                    }
                }
                else
                {
                    out = 1;
                }
            }
            else
            {
                out = 0;
            }
            if( out )
            {
                Na = 0;
                printf( "%d\n", i );
            }
        }
        if (Na)
        {
            printf("NA\n");
        }
    }
    return 0;
}

