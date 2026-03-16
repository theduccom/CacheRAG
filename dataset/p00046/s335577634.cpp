#include <iostream>
using namespace std;

int main()
{
	double MIN=(double) (1<<30), MAX=0, t;
	while (cin >> t)
	{
		MIN = min(MIN, t);
		MAX = max(MAX, t);
	}

	cout.setf(ios::fixed);
	cout.precision(3);
	cout << MAX-MIN << endl;
}