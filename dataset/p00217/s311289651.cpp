#include <iostream>

using namespace std;

int main()
{
    int n;

    while (cin >> n, n) {
        int max_p, max_d;
        int p, d1, d2;

        max_p = max_d = -100;
        while (n--) {
            cin >> p >> d1 >> d2;
            
            if (d1 + d2 > max_d) {
                max_d = d1 + d2;
                max_p = p;
            }
        }
        cout << max_p << " " << max_d << endl;
    }

    return 0;
}