#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
    int m, d;
    char c;
    double x = 0; 
    double y = 0;
    double cur_d = M_PI / 2.0;
    while (cin >> m >> c >> d) {
        if (m == 0 && d == 0) break;
        x += cos(cur_d) * m;
        y += sin(cur_d) * m;
        cur_d -= d * M_PI / 180.0;
    }
    cout << (int)x << endl;
    cout << (int)y << endl;
    return 0;
}