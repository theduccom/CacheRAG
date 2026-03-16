#include <iostream>

using namespace std;


#define INF 1e307

int main()
{
	double max = 0;
	double min = INF;

	double height;

	while (cin >> height)
	{
		if (height > max) { max = height; }
		if (height < min) { min = height; }
	}

	cout << max - min << endl;

	return 0;
}