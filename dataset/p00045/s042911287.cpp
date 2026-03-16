#include <iostream>

using namespace std;

int main()
{
	int P, N, C = 0, SUM1 = 0, SUM2 = 0; char ch;

	while (cin >> P >> ch >> N)
	{
		SUM1 += P * N;
		SUM2 += N;

		C++;
	}

	cout << SUM1 << endl << static_cast<int>(static_cast<double>(SUM2) / C + 0.5) << endl;

	return 0;
}