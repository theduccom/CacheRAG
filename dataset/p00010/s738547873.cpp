#include <complex>
#include <stdio.h>
#include <math.h>
using namespace std;

// _ÀWð^Æ·é
typedef complex<double> P;
// ÎÌè`
#define PI 3.1415926535898

// e·éë·Ã
#define EPS (1e-10)
//
#define X real()
#define Y imag()
	
// Op`NX
class Triangle{

private:
	//Op`ÌR_ÌÀW
	P a, b, c;
	//Op`ÌRÓÌ·³
	double edgeA,edgeB,edgeC;
	//Op`ÌRpÌå«³(WA)
	double angleA,angleB,angleC;
	//Op`ÌÊÏ
	double s;
	//]·è©çRÂÌpxðßéÖ
	double LawOfCosines(double a,double b, double c){
		return acos( (b*b+c*c-a*a) / (2.0*b*c) );
	}
	bool equal(double a, double b){//QÂÌdouble^Ìlªµ¢©Ç¤©
		return (fabs( a-b ) < EPS)? true : false ;
	}
	bool checkRightAngle(double a){//pª¼p©»è·é
		return ( fabs( a-(PI/2.0) ) < EPS )? true : false;
	}

public:
	//RXgN^(RÂÌ_ÆÓÆpxðú»)
	Triangle(P p1, P p2, P p3){
		a = p1;
		b = p2;
		c = p3;
		edgeB = abs(c-a);
		edgeA = abs(b-c);
		edgeC = abs(a-b);
		angleA = LawOfCosines(edgeA,edgeB,edgeC);
		angleB = LawOfCosines(edgeB,edgeC,edgeA);
		angleC = LawOfCosines(edgeC,edgeA,edgeB);
		double hoge;
		hoge = (edgeA+edgeB+edgeC)/2.0;
		s = sqrt(hoge*(hoge-edgeA)*(hoge-edgeB)*(hoge-edgeC));
	}
	
	
	double getAx(){//_AÌXÀWðÔ·
		return a.X;
	}
	double getAy(){//_AÌYÀWðÔ·
		return a.Y;
	}
	double getBx(){//_BÌXÀWðÔ·
		return b.X;
	}
	double getBy(){//_BÌYÀWðÔ·
		return b.Y;
	}
	double getCx(){//_CÌXÀWðÔ·
		return c.X;
	}
	double getCy(){//_CÌYÀWðÔ·
		return c.Y;
	}
	double getEdgeA(){//ÓAÌ·³ðÔ·
		return edgeA;
	}
	double getEdgeB(){//ÓBÌ·³ðÔ·
		return edgeB;
	}
	double getEdgeC(){//ÓCÌ·³ðÔ·
		return edgeC;
	}
	double getAngleA(){//pAÌpx(WA)ðÔ·
		return angleA;
	}
	double getAngleB(){//pBÌpx(WA)ðÔ·
		return angleB;
	}
	double getAngleC(){//pCÌpx(WA)ðÔ·
		return angleC;
	}
	double getArea(){//Op`ÌÊÏðÔ·
		return s;
	}
	double circumscribedCircleRadius(){//OÚ~Ì¼aðÔ·
		return ( edgeA / sin(angleA) / 2.0 );
	}
	double circumscribedCircleX(){//OS(OÚ~ÌS)ÌXÀWðÔ·
		double A = sin(2.0*angleA);
		double B = sin(2.0*angleB);
		double C = sin(2.0*angleC);
		return ( (a.X * A + b.X * B + c.X * C) / (A+B+C) );
	}
	double circumscribedCircleY(){//OS(OÚ~ÌS)ÌYÀWðÔ·
		double A = sin(2.0*angleA);
		double B = sin(2.0*angleB);
		double C = sin(2.0*angleC);
		return ( (a.Y * A + b.Y * B + c.Y * C) / (A+B+C) );
	}
	double incenterRadius(){//àÚ~Ì¼aðÔ·
		return ( (2.0*s) / (edgeA+edgeB+edgeC) );
	}
	double incenterX(){//àS(àÚ~ÌS)ÌXÀWðÔ·
		return ( (edgeA*a.X+edgeB*b.X+edgeC*c.X) / (edgeA+edgeB+edgeC) );
	}
	double incenterY(){//àS(àÚ~ÌS)ÌYÀWðÔ·
		return ( (edgeA*a.Y+edgeB*b.Y+edgeC*c.Y) / (edgeA+edgeB+edgeC) );
	}
	double centerOfGravityX(){//dSÌXÀWðÔ·
		return ( (a.X+b.X+c.X) / 3.0 );
	}
	double centerOfGravityY(){//dSÌYÀWðÔ·
		return ( (a.Y+b.Y+c.Y) / 3.0 );
	}
	bool checkRightTriangle(){//¼pOp`©Ç¤©»è·é
		if(checkRightAngle(angleA)||checkRightAngle(angleB)||checkRightAngle(angleC)){
			return true;
		}else{
			return false;
		}
	}
	bool checkIsoscelesTriangle(){//ñÓOp`©»è·é 
		if( equal(angleA,angleB) || equal(angleB,angleC) || equal(angleC,angleA) ){
			return true;
		}else{
			return false;
		}
	}
	bool checkEquilateralTriangle(){//³Op`©»è·é 
		if( equal(edgeA,edgeB) && equal(edgeB,edgeC) && equal(edgeC,edgeA)){
			return true;
		}else{
			return false;
		}
	}
};

int main(){
	int n;
	double ax,ay,bx,by,cx,cy;
	scanf("%d", &n);
	for(int i=0 ; i<n ; i++){
		scanf("%lf %lf %lf %lf %lf %lf", &ax,&ay,&bx,&by,&cx,&cy);
		P a(ax,ay), b(bx,by), c(cx,cy);
		Triangle Tr(a,b,c);
		printf("%.3f %.3f ", (float)Tr.circumscribedCircleX(), (float)Tr.circumscribedCircleY());
		printf("%.3f\n", (float)Tr.circumscribedCircleRadius() );
	}
	return 0;
}