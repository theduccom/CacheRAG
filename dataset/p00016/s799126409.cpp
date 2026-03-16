#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main()
{
    vector<int> a, b;
    string u;
    b.push_back(0);
    while (true) {
        cin >> u;
        int s, t;
        sscanf(u.c_str(), "%d,%d", &s, &t);
        if (!(s | t)) break;
        a.push_back(s);
        b.push_back(t);
    }
    int n = a.size();
    int deg = 0;
    double x = 0, y = 0;
    for (int i = 0; i < n; ++i) {
        deg += b[i];
        x += a[i] * sin(M_PI * deg / 180.0);
        y += a[i] * cos(M_PI * deg / 180.0);
    }
    cout << (int)x << endl;
    cout << (int)y << endl;
    return 0;
}