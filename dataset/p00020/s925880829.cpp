#include <cctype>
#include <cstring>
#include <iostream>

using namespace std;

int main()
{
	char S[256];

	cin.getline(S, 256);

	for (int i = 0; i < strlen(S); i++)
	{
		if (islower(S[i]) != 0)
		{
			S[i] = toupper(S[i]);
		}

		cout << S[i];
	}

	cout << endl;

	return 0;
}