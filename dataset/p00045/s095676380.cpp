#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, sum = 0;
    char c;
    double num = 0, N = 0;
    while (cin >> a >> c >> b) {
        sum += a * b;
        num += b;
        N += 1.0;
    }
    cout << sum << '\n' << (int)(num / N + 0.5) << endl;
    return 0;
}