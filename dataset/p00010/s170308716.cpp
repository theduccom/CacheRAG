#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

struct TCoordinate
{
	double x;
	double y;
};

struct TCircle
{
	double CenterX;
	double CenterY;
	double Radius;
};

TCircle GetCircle(TCoordinate P1, TCoordinate P2, TCoordinate P3)
{
	double x1 = P1.x;
	double x2 = P2.x;
	double x3 = P3.x;
	double y1 = P1.y;
	double y2 = P2.y;
	double y3 = P3.y;
	double x, y, r;
	if(y1 == y2 || y2 == y3 || y3 == y1){
		if(y2 == y3){
			swap(x3, x1);
			swap(y3, y1);
		}else if(y3 == y1){
			swap(x2, x3);
			swap(y2, y3);
		}
		double xa = (x2 + x3) / 2;
		double ya = (y2 + y3) / 2;
		double a  = (-x3 + x2) / (y3 - y2);
		x = (x1 + x2) / 2;
		y = a * (x - xa) + ya;
	}else{
		double xa = (x1 + x2) / 2;
		double ya = (y1 + y2) / 2;
		double a  = (-x2 + x1) / (y2 - y1);
		double xb = (x2 + x3) / 2;
		double yb = (y2 + y3) / 2;
		double b  = (-x3 + x2) / (y3 - y2);
		x = (b * xb - a * xa - yb + ya) / (b - a);
		y = a * (x - xa) + ya;
	}
	r = sqrt((x - x1) * (x - x1) + (y - y1) * (y - y1));
	TCircle Circle = {x, y, r};
	return Circle;
}

TCoordinate GetCenterPoint(TCoordinate P1, TCoordinate P2, TCoordinate P3)
{
	TCircle Circle = GetCircle(P1, P2, P3);
	return {Circle.CenterX, Circle.CenterY};
}

double GetRadius(TCoordinate P1, TCoordinate P2, TCoordinate P3)
{
	TCircle Circle = GetCircle(P1, P2, P3);
	return Circle.Radius;
}

int main()
{
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		TCoordinate P1, P2, P3;
		cin >> P1.x >> P1.y >> P2.x >> P2.y >> P3.x >> P3.y;
		TCoordinate CenterPoint = GetCenterPoint(P1, P2, P3);
		double Radius = GetRadius(P1, P2, P3);
		cout << fixed << setprecision(3);
		cout << CenterPoint.x << ' ' << CenterPoint.y << ' ' << Radius << endl;
	}
	return 0;
}