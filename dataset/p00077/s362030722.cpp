#include <string>
#include <iostream>

using namespace std;

string put_nchar(int n, char c)
{
	string S = "";

	for (int i = 0; i < n; i++)
	{
		S += c;
	}

	return S;
}

int main()
{
	string S;

	while (cin >> S)
	{
		for (string::size_type i = 0; i < S.size(); i++)
		{
			if (S[i] == '@')
			{
				cout << put_nchar(static_cast<int>(S[i + 1]) - 48, S[i + 2]);

				i += 2;
			}
			else
			{
				cout << S[i];
			}
		}

		cout << endl;
	}

	return 0;
}