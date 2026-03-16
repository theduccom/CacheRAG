#include <string>
#include <iostream>

using namespace std;

int main()
{
	string S;

	getline(cin, S);

	for (string::size_type i = 0; i < (S.size() - 4); i++)
	{
		if (S.substr(i, 5) == "apple")
		{
			S.replace(i, 5, "peach"); i += 4;
		}
		else if (S.substr(i, 5) == "peach")
		{
			S.replace(i, 5, "apple"); i += 4;
		}
	}

	cout << S << endl;

	return 0;
}