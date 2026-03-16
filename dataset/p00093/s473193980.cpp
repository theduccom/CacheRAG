#include <iostream>
#include <algorithm>
using namespace std;

bool isLeapYear(int y)
{
	if (y % 400 == 0) return true;
	if (y % 100 == 0) return false;
	if (y % 4 == 0) return true;
	return false;
}

int main()
{
	int a, b;
	bool isFirstDataSet = true;

	while (cin >> a >> b, a + b)
	{
		if (!isFirstDataSet) cout << endl;

		isFirstDataSet = false;
		bool existsLeapYear = false;

		for (int y = a; y <= b; y++)
		{
			if (isLeapYear(y))
			{
				existsLeapYear = true;
				cout << y << endl;
			}
		}
		if (!existsLeapYear) cout << "NA" << endl;
	}

	return 0;
}