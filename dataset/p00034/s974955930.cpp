#include <bits/stdc++.h>

using namespace std;

int l[10];
int a, b;

int main()
{
    while (~scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d",&l[0],&l[1],&l[2],&l[3],&l[4],&l[5],&l[6],&l[7],&l[8],&l[9],&a,&b)) {
        for (int i = 1; i < 10; ++i) l[i] += l[i - 1];
        double c = (double)l[9] / (a + b) * a;
        for (int i = 9; i >= 0; --i) if (c >= l[i]) { printf("%d\n", i + 2 - (c == l[i])); break; }
    }
}