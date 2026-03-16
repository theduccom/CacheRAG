#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	int cnt = 0;
	while (cin >> str)
	{
		int s = str.size();
		int b = s/2;
		bool f = true;
		if (s%2)
		{
			for (int i=1; i<=b; i++)
			{
				if (str[b-i]!=str[b+i])
				{
					f = false;
					break;
				}
			}
		}
		else
		{
			for (int i=0; i<b; i++)
			{
				if (str[b-i-1]!=str[b+i])
				{
					f = false;
					break;
				}
			}
		}
		if (f) cnt++;
	}

	cout << cnt << endl;
	return 0;
}