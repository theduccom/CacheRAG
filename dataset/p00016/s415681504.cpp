#include <iostream>
#include <cmath>
using namespace std;

class THuman
{
public:
	void Move(int Distance);
	void Turn(int Degree);
	double GetX();
	double GetY();
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

double THuman::GetX()
{
	return FX;
}

double THuman::GetY()
{
	return FY;
}

THuman::THuman()
{
	FX = 0;
	FY = 0;
	FDegree = 0;
}

int GetIntegerPart(double A)
{
	double IntegerPart;
	modf(A, &IntegerPart);
	return IntegerPart;
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
	cout << GetIntegerPart(Human.GetX()) << endl << GetIntegerPart(Human.GetY()) << endl;
	return 0;
}