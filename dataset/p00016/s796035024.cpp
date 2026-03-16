//0016 Treasure Hunt

#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

template<class T>
T DigToRad(T x)
{
	return x / T(180) * 3.14159265358979323846264338327950;
}


int main(void)
{
	double x, y;
	double d, dd, r;
	char dummy;

	x = y = 0;
	d = 90;
	//üÍÍR}ÅæØçêÄ^¦çêé
	while(cin >> r >> dummy >> dd, r)
	{
		x += r*cos(DigToRad(d));
		y += r*sin(DigToRad(d));
		//³ÌÈçEñè
		d -= dd;
	}
	//®ðoÍ
	cout << (int)x << endl << (int)y << endl;
	return 0;
}