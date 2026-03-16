#include <iostream>
#include <cmath>
using namespace std;

class Point {
public:
  double x, y;
  Point(double x=0, double y=0) : x(x), y(y) {}
};

double dist(Point p1, Point p2) {
  return sqrt(pow(p1.x-p2.x, 2.0)+pow(p1.y-p2.y, 2.0));
}

double LawOfCosines(double a, double b, double c) {
  return acos( (b*b+c*c-a*a) / (2.0*b*c) );
}

Point circumcenter(Point pa, Point pb, Point pc) {
  /*
  double A = abs(atan2(pb.y-pa.y, pb.x-pa.x) - atan2(pc.y-pa.y, pc.x-pa.x));
  double B = abs(atan2(pa.y-pb.y, pa.x-pb.x) - atan2(pc.y-pb.y, pc.x-pb.x));
  double C = abs(atan2(pa.y-pc.y, pa.x-pc.x) - atan2(pb.y-pc.y, pb.x-pc.x));
  */
  double a = dist(pb, pc);
  double b = dist(pa, pc);
  double c = dist(pa, pb);
  double A = LawOfCosines(a, b, c);
  double B = LawOfCosines(b, c, a);
  double C = LawOfCosines(c, a, b);
  return Point((pa.x*sin(A*2)+pb.x*sin(B*2)+pc.x*sin(C*2))
	       /(sin(A*2)+sin(B*2)+sin(C*2)),
	       (pa.y*sin(A*2)+pb.y*sin(B*2)+pc.y*sin(C*2))
	       /(sin(A*2)+sin(B*2)+sin(C*2))
	       );
}

main() {
  Point p[3];
  Point op;
  int n;
  cin >> n;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < 3; j++) cin >> p[j].x >> p[j].y;
    op = circumcenter(p[0], p[1], p[2]);
    /*double A = abs(atan2(p[1].y-p[0].y, p[1].x-p[0].x)
		   - atan2(p[2].y-p[0].y, p[2].x-p[0].x));*/
    printf("%.3f %.3f %.3f\n", op.x, op.y, dist(op,p[0]));
  }
}