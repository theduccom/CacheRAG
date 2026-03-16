#include <iostream>

using namespace std;

int main()
{
    double min, max, tmp;
    cin >> tmp;
    min = max = tmp;

    while (cin >> tmp) {
        if (tmp < min) {
            min = tmp;
        }
        if (tmp > max) {
            max = tmp;
        }
    }

    cout << fixed << (max - min) << endl;

    return 0;
}