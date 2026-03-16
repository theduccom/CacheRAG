#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct THuman
{
	double X;
	double Y;
	int Degree;
};

THuman Move(int Distance, THuman Human)
{
	Human.Y += Distance * cos(Human.Degree * M_PI / 180);
	Human.X += Distance * sin(Human.Degree * M_PI / 180);
	return Human;
}

int main()
{
	THuman Human = {0, 0, 0};
	while(true){
		int Distance;
		int Degree;
		char Dummy;
		cin >> Distance >> Dummy >> Degree;
		if(Distance == 0 && Degree == 0) break;
		Human = Move(Distance, Human);
		Human.Degree += Degree;
	}
	double GaussX, FractionalX, GaussY, FractionalY;
	FractionalX = modf(Human.X, &GaussX);
	FractionalY = modf(Human.Y, &GaussY);
	cout << fixed << setprecision(0) << GaussX << endl << GaussY << endl;
	return 0;
}