#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
  int datasetnum;
  double x1,y1,x2,y2,x3,y3;

  cin >> datasetnum;

  for (int loopcount = 0; loopcount < datasetnum; loopcount++) {
    double px,py,r;

    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    double len_1 = sqrt(pow(x3-x2,2)+pow(y3-y2,2));
    double len_2 = sqrt(pow(x1-x3,2)+pow(y1-y3,2));
    double len_3 = sqrt(pow(x2-x1,2)+pow(y2-y1,2));

    double s = (len_1+len_2+len_3)/2;
    double area = sqrt(s*(s-len_1)*(s-len_2)*(s-len_3));

    double sin_1 = 2*area/(len_2*len_3);

    r = len_1/(2*sin_1);

    double a = x1 - x3;
    double b = y1 - y3;
    double c = pow(x1,2)-pow(x3,2)+pow(y1,2)-pow(y3,2);
    double d = x2 - x3;
    double e = y2 - y3;
    double f = pow(x2,2)-pow(x3,2)+pow(y2,2)-pow(y3,2);

    px = (c*e-b*f)/(2*(a*e-b*d));
    py = (c*d-a*f)/(2*(b*d-a*e));

    cout << fixed << setprecision(3) << px << " " << py << " " << r << endl;
  }

  return 0;
}