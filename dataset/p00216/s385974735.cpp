#include <iostream>

using namespace std;

const int bf = 4280;

int main()
{
    int inp;

    while (cin >> inp, inp != -1) {
        int now = 0;

        while (inp >= 0) {
            if (inp > 30) {
                now += 160 * (inp - 30);
                inp = 30;
            }
            else if (inp > 20) {
                now += 140 * (inp - 20);
                inp = 20;
            }
            else if (inp > 10) {
                now += 125 * (inp - 10);
                inp = 10;
            }
            else {
                now += 1150;
                inp = -1;
            }
        }
        cout << bf - now << endl;
    }

    return 0;
}