#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double area = 0.0;
    double x[20], y[20];
    int n = 0;
    char ch;

    while (cin >> x[n] >> ch >> y[n])
        n++;
    x[n] = x[0];
    y[n] = y[0];
    n++;

    for (int i = 0; i < n; i++)
        area += x[i] * y[i + 1] - x[i + 1] * y[i];

    cout << setiosflags(ios::fixed) << setprecision(6);
    cout << abs(area  / 2.0) << endl;
}