#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
  int n;
  cin >> n;
  while (n--) {
    double x1, y1, x2, y2, x3, y3, px, py, r;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    px = ((y1 - y3) * (y1 * y1 - y2 * y2 + x1 * x1 - x2 * x2) - (y1 - y2) * (y1 * y1 - y3 * y3 + x1 * x1 - x3 * x3)) / (2 * (y1 - y3) * (x1 - x2) - 2 * (y1 - y2) * (x1 - x3));
    py = ((x1 - x3) * (x1 * x1 - x2 * x2 + y1 * y1 - y2 * y2) - (x1 - x2) * (x1 * x1 - x3 * x3 + y1 * y1 - y3 * y3)) / (2 * (x1 - x3) * (y1 - y2) - 2 * (x1 - x2) * (y1 - y3));
    r = sqrt((x1 - px) * (x1 - px) + (y1 - py) * (y1 - py));
    cout << fixed << setprecision(3) << px << " " << py << " " << r << endl;
  }
}
