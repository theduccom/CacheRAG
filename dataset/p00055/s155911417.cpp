#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
	double N;

	while (cin >> N)
	{
		cout << setprecision(15) << N * 211 / 27 << endl;
	}

	return 0;
}