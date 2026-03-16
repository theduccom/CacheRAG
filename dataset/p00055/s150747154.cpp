#include <iostream>
#include <iomanip>
#include <array>

using namespace std;

int main()
{
    array<double, 10> seq;

    while (cin >> seq.at(0)) {
        double sum = seq.at(0);
        for (size_t i = 1; i < 10; i++) {
            seq.at(i) = (i % 2)? (seq.at(i - 1) * 2): (seq.at(i - 1) / 3);
            sum += seq.at(i);
        }

        cout << fixed << setprecision(6) << sum << endl;
    }

    return 0;
}