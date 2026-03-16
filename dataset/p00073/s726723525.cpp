#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
        double x, h;
        double s;

        while (1){
                scanf("%lf", &x);
                scanf("%lf", &h);

                if (x == 0.0 && h == 0.0){
                        break;
                }

                s = (x * x) + (x * sqrt((x / 2.0) * (x / 2.0) + h * h)) * 2.0;

                printf("%lf\n", s);
        }

        return (0);
}