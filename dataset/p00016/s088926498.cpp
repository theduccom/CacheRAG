#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int r, degree;
    int sum_degree = 0;
    double wx = 0, wy = 0;
    char comma;

    while (true) {
        cin >> r >> comma >> degree;
        if (!r && !degree) {
            break;
        }

        // the input of sin and cos is radian
        wx += r * sin(M_PI / 180.0 * sum_degree);
        wy += r * cos(M_PI / 180.0 * sum_degree);

        sum_degree = (sum_degree + degree) % 360;
    }

    cout << (int)wx << "\n" << (int)wy << endl;

    return 0;
}