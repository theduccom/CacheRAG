#include <cstdio>
#include <cmath>
using namespace std;
int main(void)
{
    int d, a;
    double x, y, r = 90.0;
    while (scanf("%d,%d", &d, &a))
    {
        if (d == 0 && a == 0)
        {
            break;
        }

        x += d * cos(r * M_PI / 180);
        y += d * sin(r * M_PI / 180);
        r -= a;
    }
    printf("%d\n%d\n", (int)x, (int)y);
    return 0;
}

