#include <iostream>
#include <iomanip>
#include <cmath>
int main()
{
  int n;
  std::cin >> n;
  while (n--) {
    double x1, y1, x2, y2, x3, y3, px, py, r;
    std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    double c = 2.0 * ((x2 - x1) * (y3 - y1) - (y2 - y1) * (x3 - x1));
    px = ((y3 - y1) * (x2 * x2 - x1 * x1 + y2 * y2 - y1 * y1) +
          (y1 - y2) * (x3 * x3 - x1 * x1 + y3 * y3 - y1 * y1)) / c;
    py = ((x1 - x3) * (x2 * x2 - x1 * x1 + y2 * y2 - y1 * y1) +
          (x2 - x1) * (x3 * x3 - x1 * x1 + y3 * y3 - y1 * y1)) / c;
    r = sqrt(pow(x1 - px, 2) + pow(y1 - py, 2));
    std::cout << std::fixed << std::setprecision(3) << px << " " <<
      py << " " << r << std::endl;
  }
  return 0;
}