#include <bits/stdc++.h>

using namespace std;

int main()
{
    double a;
    while (cin >> a) {
        double t = a / 9.8;
        printf("%d\n", (int)(4.9 * t * t) / 5 + 2);
    }
}