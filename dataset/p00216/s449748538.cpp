#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int n, sum;
    for (; ; ) {
        scanf("%d", &n);
        if (n == -1) break;
        sum = 1150;
        if (n > 30) sum += (n - 30) * 160, n-= n-30;
        if (n > 20) sum += (n - 20) * 140, n -= n-20;
        if (n > 10) sum += (n - 10) * 125, n -= n-10;
        printf("%d\n", 4280-sum);
    }
    return 0;
}

