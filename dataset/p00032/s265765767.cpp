#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c;

    int d = 0, e = 0;

    while (~scanf("%d,%d,%d", &a, &b, &c)) {
        if (a * a + b * b == c * c) d++;
        if (a == b) e++;
    }

    cout << d << "\n" << e << endl;
}