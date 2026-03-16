#include <iostream>
#include <string>
#include <sstream>
#define _USE_MATH_DEFINES
#include <cmath>
int main()
{
  std::string line;
  double x = 0.0, y = 0.0;
  int dir_deg = 90;
  while (std::cin >> line) {
    int i = line.find(",");
    if (i != -1) line.replace(i, 1, " ");

    std::istringstream iss(line);
    int d, t;
    iss >> d >> t;
    if (d == 0 && t == 0) break;

    double rad = dir_deg * M_PI / 180.0;
    x += std::cos(rad) * d;
    y += std::sin(rad) * d;
    dir_deg -= t;
    if (dir_deg <= -180) dir_deg += 360;
    if (dir_deg >=  180) dir_deg -= 360;
  }
  std::cout << static_cast<int>(x) << std::endl << static_cast<int>(y) << std::endl;
  return 0;
}