#include <iostream>
#include <cmath>

using namespace std;
typedef struct { double x; double y;} point;
 
point getCircumcenter(point a, point b, point c)
{
    double A1 = 2.0f * ( b.x - a.x );
    double B1 = 2.0f * ( b.y - a.y );
    double C1 = pow(a.x,2)-pow(b.x,2) + pow(a.y,2)-pow(b.y,2);
    double A2 = 2.0f * ( c.x - a.x );
    double B2 = 2.0f * ( c.y - a.y );
    double C2 = pow(a.x,2)-pow(c.x,2) + pow(a.y,2)-pow(c.y,2);
    double X = (B1 * C2 - B2 * C1) / (A1 * B2 - A2 * B1);
    double Y = (C1 * A2 - C2 * A1) / (A1 * B2 - A2 * B1);
	point P;
	P.x=X;
	P.y=Y;
    return P;
}

double getTwoPointDictance(point a, point b)
{
	return fabs(sqrt(pow((a.x-b.x),2)+pow((a.y-b.y),2)));
}
double AntiMinusZero(double n)
{
	if(n==0)
	{
		return 0.0f;
	}
	return n;
}

int main()
{
    int n;
    cin>>n;
    point a,b,c;
    while(n--)
	{
        cin>>a.x>>a.y>>b.x>>b.y>>c.x>>c.y;
        point ans = getCircumcenter(a,b,c);
        printf("%.3lf %.3lf %.3lf\n", AntiMinusZero(ans.x), AntiMinusZero(ans.y), getTwoPointDictance( a, ans));
    }
}