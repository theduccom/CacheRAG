#include <bits/stdc++.h>

using namespace std;

double to_rad(int ang)
{
    return ang * acos(-1) / 180.0;
}

int main()
{
    double a, b, x = 0, y = 0, ang = 0;
    char c;
    while (cin >> a >> c >> b, (a != 0 || b != 0)) {
        x += a * sin(to_rad(ang));
        y += a * cos(to_rad(ang));
        ang += b;
    }
    cout << (int)x << endl << (int)y << endl;
    return 0;
}