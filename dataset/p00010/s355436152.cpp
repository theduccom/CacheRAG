#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
using namespace std;

#define N 10000
#define INF 200000000

int main()
{
    int n;
    vector<double> x(3), y(3), x2(3), y2(3);
    cin >> n;

    for(int p=0; p<n; p++)
    {
        cin >> x[0] >> y[0] >> x[1] >> y[1] >> x[2] >> y[2];
        for(int i=0; i<3; i++) { x2[i] = x[i]*x[i]; y2[i] = y[i]*y[i]; }

        double a, b, c, a2, b2, c2;
        a2 = abs((x[2]-x[1])*(x[2]-x[1]) + (y[2]-y[1])*(y[2]-y[1]));
        b2 = abs((x[0]-x[2])*(x[0]-x[2]) + (y[0]-y[2])*(y[0]-y[2]));
        c2 = abs((x[1]-x[0])*(x[1]-x[0]) + (y[1]-y[0])*(y[1]-y[0]));
        a = sqrt(a2); b = sqrt(b2); c = sqrt(c2);

        double s, S2;
        s = (a + b + c) / 2;
        S2 = s * (s-a) * (s-b) * (s-c);

        double cx, cy;
        cx = (a2*(b2+c2-a2)*x[0] + b2*(c2+a2-b2)*x[1] + c2*(a2+b2-c2)*x[2]) / (16 * S2);
        cy = (a2*(b2+c2-a2)*y[0] + b2*(c2+a2-b2)*y[1] + c2*(a2+b2-c2)*y[2]) / (16 * S2);

        cout << setprecision(3) << fixed <<
            cx << " " << cy << " " << sqrt(abs((cx-x[0])*(cx-x[0])+(cy-y[0])*(cy-y[0]))) << endl;
    }
}