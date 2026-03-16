#include <iostream>
#include <cmath>
using namespace std;

class THuman
{
public:
	void Move(int Distance);
	void Turn(int Degree);
	int GetIntegerPartX();
	int GetIntegerPartY();
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

int THuman::GetIntegerPartX()
{
	double IntegerPartX;
	modf(FX, &IntegerPartX);
	return IntegerPartX;
}

int THuman::GetIntegerPartY()
{
	double IntegerPartY;
	modf(FY, &IntegerPartY);
	return IntegerPartY;
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
	cout << Human.GetIntegerPartX() << endl << Human.GetIntegerPartY() << endl;
	return 0;
}