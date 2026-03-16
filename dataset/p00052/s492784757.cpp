#include <iostream>

using namespace std;

int main()
{
	int n[100], c = 0;

	while (true)
	{
		cin >> n[c];

		if (n[c] == 0) { goto Exit; }

		c++;
	}

Exit:;

	for (int i = 0; i < c; i++)
	{
		cout << n[i] / 5 + n[i] / 25 + n[i] / 125 + n[i] / 625 + n[i] / 3125 + n[i] / 15625 << endl;
	}

	return 0;
}