#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	double Min = 99999999;
	double Max = -99999999;
	double Input;

	while (cin >> Input)
	{
		Min = min(Min, Input);
		Max = max(Max, Input);
	}
	cout << Max - Min << endl;

	return 0;
}