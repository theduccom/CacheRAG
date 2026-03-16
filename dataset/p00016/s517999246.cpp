#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

class THuman
{
public:
	void Move(int Distance);
	void Turn(int Degree);
	double GetIntegerPartX();
	double GetIntegerPartY();
	THuman();
private:
	double FX;
	double FY;
	int FDegree;
};

void THuman::Move(int Distance)
{
	FX += Distance * sin(FDegree * M_PI / 180);
	FY += Distance * cos(FDegree * M_PI / 180);
}

void THuman::Turn(int Degree)
{
	FDegree += Degree;
}

double THuman::GetIntegerPartX()
{
	double GaussX, FractionalX;
	FractionalX = modf(FX, &GaussX);
	return GaussX;
}

double THuman::GetIntegerPartY()
{
	double GaussY, FractionalY;
	FractionalY = modf(FY, &GaussY);
	return GaussY;
}

THuman::THuman()
{
	FX = 0;
	FY = 0;
	FDegree = 0;
}

int main()
{
	THuman Human;
	while(true){
		int Distance;
		int Degree;
		char Dummy;
		cin >> Distance >> Dummy >> Degree;
		if(Distance == 0 && Degree == 0) break;
		Human.Move(Distance);
		Human.Turn(Degree);
	}
	cout << fixed << setprecision(0) << Human.GetIntegerPartX() << endl << Human.GetIntegerPartY() << endl;
	return 0;
}