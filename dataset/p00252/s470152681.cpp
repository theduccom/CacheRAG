#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int a, b, c, sum;
    scanf("%d %d %d", &a, &b, &c);
    if ((a == 1 && b == 1 && c == 0) || (a == 0 && b == 0 && c == 1)) printf("Open\n");
    else printf("Close\n");
    return 0;
}

