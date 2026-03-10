#include <iostream>
#include <cstdio>
using namespace std;
int i=1, j=1;
int main()
{
    for (i=1; i<=9; i++)
        for (j=1; j<=9; j++)
            printf("%dx%d=%d\n", i, j, i*j);
    return 0;
}
