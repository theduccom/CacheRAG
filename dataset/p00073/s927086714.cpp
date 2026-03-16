#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double x;
    double h;
    while(1)
    {
        cin >> x >> h;
        if(x == 0 && h == 0)
        {
            break;
        }
        double s = x * (sqrt(x * x + 4 * h *h)) + x * x;
        cout << fixed << setprecision(6) << s << endl;
    }
    return 0;
}