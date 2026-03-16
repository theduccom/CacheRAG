#include <cstring>
#include <iostream>

using namespace std;

int main()
{
	char S[100] = ""; int c = 0;

	while (cin >> S)
	{
		for (int i = 0; i < strlen(S); i++)
		{
			if (S[i] != S[strlen(S) - i - 1]) { goto Exit; }
		}

		c++;

	Exit:;
	}

	cout << c << endl;
}