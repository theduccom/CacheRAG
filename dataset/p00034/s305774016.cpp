#include <iostream>

using namespace std;

int main()
{
    int v1, v2;
    double d, time;
    int l[10];
    char comma;

    while (cin >> l[0] >> comma) {
        int tmp;
        d = l[0];

        for (int i = 1; i < 10; i++) {
            cin >> tmp >> comma;
            d += tmp;
            l[i] = l[i - 1] + tmp;
        }

        cin >> v1 >> comma >> v2;

        time = v1 * d / (v1 + v2);

        for (int i = 0; i < 9; i++)
            if (l[i] < time && time <= l[i + 1]) {
                cout << i + 2 << endl;
                break;
            }
    }

    return 0;
}