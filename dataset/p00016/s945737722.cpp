#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct TCoordinate
{
	double X;
	double Y;
};

struct TPolarCoordinate
{
	int Distance;
	int Degree;
};

TCoordinate Move(TPolarCoordinate PolarCoordinate, TCoordinate CurrentCoordinate)
{
	CurrentCoordinate.Y += PolarCoordinate.Distance * cos(PolarCoordinate.Degree * M_PI / 180);
	CurrentCoordinate.X += PolarCoordinate.Distance * sin(PolarCoordinate.Degree * M_PI / 180);
	return CurrentCoordinate;
}

int main()
{
	TCoordinate CurrentCoordinate = {0, 0};
	int BeforeInputDegree = 0;
	while(true){
		TPolarCoordinate Input;
		char Dummy;
		cin >> Input.Distance >> Dummy >> Input.Degree;
		if(Input.Distance == 0 && Input.Degree == 0) break;
		CurrentCoordinate = Move({Input.Distance, BeforeInputDegree}, CurrentCoordinate);
		BeforeInputDegree += Input.Degree;
	}
	double GaussX, FractionalX, GaussY, FractionalY;
	FractionalX = modf(CurrentCoordinate.X, &GaussX);
	FractionalY = modf(CurrentCoordinate.Y, &GaussY);
	cout << fixed << setprecision(0) << GaussX << endl << GaussY << endl;
	return 0;
}