#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main(void)
{
	string str;
	while (cin >> str)
	{
		while (str.find("@") != -1)
		{
			int x = str.find("@");
			string temp;
			for (int i = 0; i < str[x + 1] - '0'; i++) temp += str[x + 2];
			str.replace(x, 3, temp);
		}
		cout << str << endl;
	}
	return 0;
}
