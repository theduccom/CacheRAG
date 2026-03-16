#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;

    while (cin >> n, n) {
        int max_p, max_d;
        int p, d1, d2;

        max_p = max_d = -100;
        for (int i = 0; i < n; i++) {
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