#include <cstdio>
#include <cmath>

using namespace std;

double sum = 0, average = 0;

int main()
{
    int price, num, cnt = 0;
    while( scanf( "%d,%d\n", &price, &num ) != EOF )
    {
        cnt++;
        sum += price * num;
        average += num;
    }

    average = round( average / cnt );
    printf( "%.0lf\n%.0lf\n", sum, average );
}
