#include <cstdio>
#include <cmath>
#include <climits>
#include <algorithm>

using namespace std;

double m,h,l;

int main()
{
    while(~scanf("%lf",&m)) {
        h=max(m,h);
        l=min(m,(double)INT_MAX);
    }
    printf("%f\n",fabs(h-l));
    return 0;
}