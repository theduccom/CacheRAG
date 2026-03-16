#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	string apple = "apple";
	string peach = "peach";

	getline(cin, str);

	for (int i = 0; i < str.size() - 4; i++)
	{
		if (str.substr(i, 5) == "apple")
		{
			for (int j = 0; j < 5; j++)
			{
				str[i + j] = peach[j];
			}
		}
		else if (str.substr(i, 5) == "peach")
		{
			for (int j = 0; j < 5; j++)
			{
				str[i + j] = apple[j];
			}
		}
	}

	cout << str << endl;

	return 0;
}