#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	int pal = 0;

	while (cin >> str)
	{
		bool flag = false;
		int len = str.size();

		if(len == 1)	flag = true;
		else{
			for(int i=0; i<len/2; i++)
			{
				if(str[i] == str[len-i-1])
					flag = true;
				else{
					flag = false;
					break;
				}
			}
		}

		if(flag)	pal++;
	}

	cout << pal << endl;

	return 0;
}