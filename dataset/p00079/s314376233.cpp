#include <vector>
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  vector<pair<double, double>> seq;
  double x, y;
  while (scanf("%lf,%lf", &x, &y) != EOF)
    seq.push_back(make_pair(x, y));
  seq.push_back(make_pair(seq[0].first, seq[0].second));

  double xm = seq[0].first;
  double ym = seq[0].second;
  double sum = 0.;

  for (int i = 0; i < seq.size() - 1; ++i) {
    double x1 = seq[i].first;
    double y1 = seq[i].second;
    double x2 = seq[i+1].first;
    double y2 = seq[i+1].second;
    double a = sqrt(pow(x1 - x2, 2) + pow(y1 -y2, 2));
    double b = sqrt(pow(x1 - xm, 2) + pow(y1 -ym, 2));
    double c = sqrt(pow(xm - x2, 2) + pow(ym -y2, 2));
    double z = (a + b + c) / 2.;
    double s = sqrt(z * (z - a) * (z - b) * (z - c));
    sum += s;
  }
  printf("%.10lf\n", sum);
}
