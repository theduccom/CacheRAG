#include <iostream>
using namespace std;

int main()
{
	int k, j;

	for (k = 1; k <= 9; k++)
	{
		for (j = 1; j <= 9; j++)
		{
			cout << k << "x" << j << "=" << k*j << endl;
		}

	}

	return 0;
}