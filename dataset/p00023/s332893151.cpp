#include <cstdio>
#include <cmath>

using namespace std;

double X1,Y1,r1,X2,Y2,r2;

int main()
{
    int n; scanf( "%d\n", &n );
    while( n > 0 ){
        scanf("%lf %lf %lf %lf %lf %lf\n", &X1, &Y1, &r1, &X2, &Y2, &r2 );
        double dx = X2 - X1, dy = Y2 - Y1;
        double dis = sqrt( dx * dx + dy * dy );


        if( dis < r1 - r2 )
        {
            printf( "%d\n", 2 );
        }
        else if( dis < r2 - r1 )
        {
            printf( "%d\n", -2 );
        }
        else if( abs( r2 - r1 ) <= dis && dis <= r2 + r1 )
        {
            printf( "%d\n", 1 );
        }
        else
        {
            printf( "%d\n", 0 );
        }
        n--;
    }
    return 0;
}
