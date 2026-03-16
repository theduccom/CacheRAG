#include <iostream>
#include <cmath>
#include <cstdio>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int n;
    std::cin >> n;
    while (n--) {
        /* A(x1, y1)
         * B(x2, y2)
         * C(x3, y3)
         * */
        double x1, y1, x2, y2, x3, y3;
        double px, py, r;
        double radA, radB, radC;
        double a, b, c;
        std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        a = std::sqrt(std::pow(x3 -  x2, 2) + std::pow(y3 - y2, 2));
        b = std::sqrt(std::pow(x1 -  x3, 2) + std::pow(y1 - y3, 2));
        c = std::sqrt(std::pow(x2 -  x1, 2) + std::pow(y2 - y1, 2));
        radA = std::acos((b*b + c*c - a*a) / (2*b*c));
        radB = std::acos((c*c + a*a - b*b) / (2*c*a));
        radC = std::acos((a*a + b*b - c*c) / (2*a*b));
        double sin2A = std::sin(2*radA);
        double sin2B = std::sin(2*radB);
        double sin2C = std::sin(2*radC);
        px = (sin2A*x1 + sin2B*x2 + sin2C*x3) / (sin2A + sin2B + sin2C);
        py = (sin2A*y1 + sin2B*y2 + sin2C*y3) / (sin2A + sin2B + sin2C);
        r = a / (2 * std::sin(radA));
        std::printf("%.3lf %.3lf %.3lf\n", px, py, r);
        //std::printf("(x1,y1)=(%.1lf,%.1lf)\n(x2,y2)=(%.1lf,%.1lf)\n(x3,y3)=(%.1lf,%.1lf)\n", x1, y1, x2, y2, x3, y3);
        //std::printf("a:%.3lf b:%.3lf c:%.3lf\n", a, b, c);
        //std::printf("radA:%.3lf radB:%.3lf radC:%.3lf\n", radA, radB, radC);
        //std::printf("A:%.3lf B:%.3lf C:%.3lf\n", radA * 180 / M_PI, radB * 180 / M_PI, radC * 180 / M_PI);
    }
}

