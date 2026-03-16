#include <iostream>
#include <cmath>
using namespace std;

int main()
{

	char c; int f=0;
	double s,x,y,x0,y0,vx[2],vy[2];

	cin >> x0 >> c >> y0;
	cin >> x  >> c >> y ;

	vx[1] = x-x0;
	vy[1] = y-y0;

	s=0;
	while(cin >> x >> c >> y)
	{
		vx[f] = x-x0;
		vy[f] = y-y0;
		
		s+= fabs(vx[f]*vy[1-f] - vx[1-f]*vy[f]);
		
		f=1-f;
	}

	cout << s/2.0 << endl;
}