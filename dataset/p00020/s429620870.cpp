#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main()
{
	string buf;
	while (getline(cin, buf))
	{
		for (int i=0; i<buf.size(); i++)
		{
			if (islower(buf[i]))
			{
				cout << (char) toupper(buf[i]);
			}
			else
			{
				cout << buf[i];
			}
		}
		cout << endl;
	}

	return 0;
}