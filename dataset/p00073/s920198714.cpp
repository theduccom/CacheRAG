#include <bits/stdc++.h>

using namespace std;

int main()
{
    double S, x, h;
 
    while (cin >> x >> h, (x != 0 || h != 0)) {
        S = (sqrt(h * h + x * x / 4) * 2 + x) * x;
        printf("%.6f\n" ,S);
    }
    return 0;
}