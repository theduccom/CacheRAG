#include<iostream>
#include<cmath>

enum JudgeCircleIntersect 
{
	BinA =  2,
	AinB = -2,
	AcrossB = 1,
	AdisB = 0,
	Error = -1
};

struct Circle
{
	Circle()
	{
	}

	Circle(double sx, double sy, double sr):cx(sx), cy(sy), r(sr)
	{
	}

	double cx;

	double cy;

	double r;
};

double Abs(double x)
{
	return x>=0 ?  x : -x;
}

JudgeCircleIntersect Intersect(const Circle& a, const Circle& b)
{
	double distance = sqrt((a.cx-b.cx)*(a.cx-b.cx)+(a.cy-b.cy)*(a.cy-b.cy));


	if(a.r+b.r<distance)
	{
		return AdisB;
	}
	else if((b.r-a.r)>distance && (b.r-a.r)>0)
	{
		return AinB;
	}
	else if((a.r-b.r)>distance && (a.r-b.r)>0)
	{
		return BinA;
	}
	else if(Abs(a.r-b.r)<=distance && (a.r+b.r>=distance))
	{
		return AcrossB;
	}
	else
	{
		return Error;
	}
}

int main()
{
	int n = 0;
	
	double xa, ya, ra, xb, yb, rb;

	std::cin >> n;

	for(int i=0; i<n; ++i)
	{
		std::cin >> xa >> ya >> ra 
			>> xb >> yb >> rb;

		Circle a(xa, ya, ra);

		Circle b(xb, yb, rb);

		std::cout << Intersect(a,b) << '\n';
	}


	/*
	Circle a(20.0,40.0,30.0); // 位置(20,40), 半径 30 の円

	Circle b(30.0,50.0,20.0); // 位置(40,50), 半径 20 の円

	if(Intersect(a,b))
	{
		std::cout << "a と b は交差している\n";
	}
	else
	{
		std::cout << "a と b は交差していない\n";
	}
	*/
}