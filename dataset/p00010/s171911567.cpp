#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <complex>
#include <cstdio>

using namespace std;

typedef complex<double> P;

//ヤバそう？
#define X real()
#define Y imag()


class Triangle{
public:
	P p1,p2,p3;

	//e1:p2-p3間の辺
	double e1,e2,e3;

	//a1:e1の向かいの角
	double a1,a2,a3;

	//cosine formula
	//長さaの辺の向かいの角の角度
	double cf(double a,double b,double c){
		return acos((b*b+c*c-a*a)/(2.0*b*c));
	}

	Triangle(P _p1,P _p2,P _p3){
		p1=_p1;
		p2=_p2;
		p3=_p3;

		e1=abs(p2-p3);
		e2=abs(p1-p3);
		e3=abs(p1-p2);

		a1=cf(e1,e2,e3);
		a2=cf(e2,e1,e3);
		a3=cf(e3,e1,e2);

	}

	P get_center(){
		return (sin(2*a1)*p1+sin(2*a2)*p2+sin(2*a3)*p3)/(sin(2*a1)+sin(2*a2)+sin(2*a3));
	}

	double get_r(){
		return e1/(2.0*sin(a1));
	}


};

int main()
{
	int n;
	cin>>n;

	for(int i=0;i<n;i++){
		P p[3];
		for(int j=0;j<3;j++){
			double x,y;
			cin>>x>>y;
			p[j]=P(x,y);
		}
		Triangle T(p[0],p[1],p[2]);

		P xy=T.get_center();
		double r=T.get_r();

		printf("%.3f %.3f %.3f\n",xy.X,xy.Y,r);
	}


	return 0;
}