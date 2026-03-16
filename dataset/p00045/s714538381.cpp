#include <cstdio>
using namespace std;

int main(void)
{
    int cost, scost=0, num, snum=0, cnt=0;
    while(~scanf("%d,%d",&cost, &num)) {
        scost += cost * num;
        snum += num;
        cnt++;
    }
    printf("%d\n%d\n", scost, (snum + 1)/cnt);

    return 0;
}