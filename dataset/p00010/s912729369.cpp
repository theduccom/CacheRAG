#include <iostream>
#include <complex>
#include <cmath>
using namespace std;

typedef complex<double> point;

#define PI M_PI
#define EPS (1e-10)
#define X real()
#define Y imag()

class Triangle{
private:	
	point a,b,c;
	double edgeA,edgeB,edgeC;
	double angleA,angleB,angleC;
	double calc_angle(double a,double b, double c){
		return acos((b*b+c*c-a*a)/(2.0*b*c));
	}
	bool equal(double a, double b){
		return (abs(a-b) < EPS)? true: false;
	}

public:
	Triangle(point p1,point p2,point p3){
		a=p1; b=p2; c=p3;
		edgeA=abs(b-c);
		edgeB=abs(c-a);
		edgeC=abs(a-b);
		angleA=calc_angle(edgeA,edgeB,edgeC);
		angleB=calc_angle(edgeB,edgeC,edgeA);
		angleC=calc_angle(edgeC,edgeA,edgeB);
	}
	double circumscribed_radius(){
		return (edgeA/(2.0*sin(angleA)));
	}
	double circumscribed_X(){
		double A=sin(2.0*angleA);
		double B=sin(2.0*angleB);
		double C=sin(2.0*angleC);
		return((a.X*A+b.X*B+c.X*C)/(A+B+C));
	}
	double circumscribed_Y(){
		double A=sin(2.0*angleA);
		double B=sin(2.0*angleB);
		double C=sin(2.0*angleC);
		return((a.Y*A+b.Y*B+c.Y*C)/(A+B+C));
	}
};

int main(void){
	double x1,y1;
	double x2,y2;
	double x3,y3;
	int n;
	double r,px,py;

	cin >> n;
	for(int i=0;i<n;i++){
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
		point p1(x1,y1);
		point p2(x2,y2);
		point p3(x3,y3);
		Triangle Tr(p1,p2,p3);
		r=Tr.circumscribed_radius();
		px=Tr.circumscribed_X();
		py=Tr.circumscribed_Y();
		cout << fixed;
		cout.precision(3);
		cout << px << " " << py << " " << r << endl;
		if(i==20) break;
	}
	return 0;
}