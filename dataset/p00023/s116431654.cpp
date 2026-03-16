#include <iostream>

using std::cin;

struct Circle {
    double x;
    double y;
    double r;
};

double pow2(double x);

int main()
{
    int data_num;
    cin >> data_num;

    while (data_num--) {
        Circle a, b;
        cin >> a.x >> a.y >> a.r >> b.x >> b.y >> b.r;

        double dist = pow2(a.x - b.x) + pow2(a.y - b.y);

        int ans;
        if (dist > pow2(a.r + b.r)) {
            ans = 0;
        } else if (dist >= pow2(a.r - b.r)) {
            ans = 1;
        } else {
            ans = (a.r > b.r)? 2: (-2);
        }

        std::cout << ans << std::endl;
    }

    return 0;
}

double pow2(double x)
{
    return (x * x);
}