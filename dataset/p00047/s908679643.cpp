#include <iostream>
#include <string>
using namespace std;

int main()
{
	char x = 'A';
	string str;
	while(cin >> str)
	{
		if(str[0] == x)
		{
			x = str[2];
		}
		else if(str[2] == x)
		{
			x = str[0];
		}
	}
	
	cout << x << endl;
	return 0;
}