#include<iostream>
#include<cstdio>
#include<vector>
#include<cmath>

using namespace std;

class CPoint{
public:
	CPoint(double x,double y):x(x),y(y){}
	double x,y;
};
double Distance(const CPoint &a, const CPoint &b){
	return sqrt(pow(a.x-b.x,2.0)+pow(a.y-b.y,2.0));
}
double HelonArea(const CPoint& a, const CPoint& b, const CPoint& c){
	double dAB = Distance(a,b);
	double dAC = Distance(a,c);
	double dBC = Distance(b,c);
	double z = (dAB+dAC+dBC)/2;

	return sqrt(z*(z-dAB)*(z-dAC)*(z-dBC));
}

int main(void){
	vector<CPoint> vP;
	double S = 0;
	while( true ){
		double x, y;

		if( EOF == scanf("%lf,%lf",&x,&y) ) break;
		vP.push_back(CPoint(x,y));

	}
	for(unsigned int i = 1; i < vP.size() - 1; i++){
		S += HelonArea(vP[0],vP[i],vP[i+1]);
	}
	printf("%lf\n",S);
	return 0;
}