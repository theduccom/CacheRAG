#include <string>
#include <string.h>
#include <iostream>

using namespace std;

int main()
{
	int N, B[4]; string S;

	memset(B, 0, sizeof(B));

	while (cin >> N >> S)
	{
		if (S == ",A")
		{
			B[0] += 1;
		}
		else if (S == ",B")
		{
			B[1] += 1;
		}
		else if (S == ",AB")
		{
			B[2] += 1;
		}
		else if (S == ",O")
		{
			B[3] += 1;
		}
	}

	cout << B[0] << endl << B[1] << endl << B[2] << endl << B[3] << endl;

	return 0;
}