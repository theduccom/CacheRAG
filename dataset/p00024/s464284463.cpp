#include <cstdio>

using namespace std;

double y,v;

int main()
{
    while ( scanf( "%lf\n", &v ) != EOF )
    {
        y = v * v / 4 / 4.9;;
        int f = 1,h = 0;
        while( h < y )
        {
            f++;
            h += 5;
        }
        printf( "%d\n", f );
    }
    return 0;
}
/* 比較演算子に型の統一は不要。 */
