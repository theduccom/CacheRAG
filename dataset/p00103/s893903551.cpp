#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int n;
string eventType;
int point;
int outCount;
bool first, second, third;

void hit()
{
	point += third;
	third = second;
	second = first;
	first = true;
}
void homerun()
{
	point++;
	point += first;
	point += second;
	point += third;
	first = false;
	second = false;
	third = false;
}
void out()
{
	outCount++;
}

int main()
{
	cin >> n;
	while (n--)
	{
		point = 0;
		outCount = 0;
		first = false;
		second = false;
		third = false;

		while (true)
		{
			cin >> eventType;
			if (eventType == "HIT") hit();
			if (eventType == "HOMERUN") homerun();
			if (eventType == "OUT") out();

			if (outCount == 3)
			{
				cout << point << endl;
				break;
			}
		}
	}

	return 0;
}