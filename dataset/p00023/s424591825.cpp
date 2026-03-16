#include <iostream>
#include <cmath>

double dist(double xa, double ya, double xb, double yb)
{
    return sqrt((xb - xa) * (xb - xa) + (yb - ya) * (yb - ya));
}

int main()
{
    int n;
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        double xa, ya, ra, xb, yb, rb;
        std::cin >> xa >> ya >> ra >> xb >> yb >> rb;

        double d = dist(xa, ya, xb, yb);
        if (d > ra + rb) std::cout << "0\n";
        else {
            if (d + rb < ra) std::cout << "2\n";
            else if (d + ra < rb) std::cout << "-2\n";
            else std::cout << "1\n";
        }
    }
}