#include <bits/stdc++.h>

using namespace std;

#define PI 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679L

int main()
{
	long double x , y;
	char c;
	long double nowX = 0.0L , nowY = 0.L , nowA = 0.L;
	while(cin >> x >> c >> y , x || y)
	{
		nowX += cosl(PI*nowA / 180.L)*x;
		nowY += sinl(PI*nowA / 180.L)*x;
		nowA += y;
		if(nowA > 360.L)
		{
			nowA -= 360.L;
		} else if(nowA < 0.0L)
		{
			nowA += 360.L;
		}
	}
	cout << ( long long int )nowY << endl << ( long long int )nowX << endl;
}