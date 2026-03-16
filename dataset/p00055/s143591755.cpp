#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double a;

    cout << setprecision(7) << fixed;
    while (cin >> a) {
        double ans = a;

        for (int i = 2; i <= 10; i++) {
            if (i % 2) 
                a /= 3.0;
            else 
                a *= 2.0;
            ans += a;
        }
        cout << ans << endl;
    }

    return 0;
}