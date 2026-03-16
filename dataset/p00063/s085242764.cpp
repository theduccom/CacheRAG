#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	int count = 0;
	bool flag;

	while (cin >> str)
	{
		flag = true;
		for (int i = 0; i < str.size() / 2; i++)
		{
			if (str[i] != str[str.size() - 1 - i]) flag = false;
		}
		if (flag) count++;
	}
	cout << count << endl;

	return 0;
}