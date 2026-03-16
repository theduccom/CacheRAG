#include <iostream>
#include <string>
using namespace std;

int main()
{
	char str[512];
	while(cin >> str)
	{
		int r=0;
		while(str[r])
		{
			if(str[r]=='@')
			{
				for(int i=0; i<str[r+1]-'0'; i++)
				{
					cout << str[r+2];
				}
				r+=3;
			}
			else
			{
				cout << str[r];
				r+=1;
			}
		}
		cout << endl;
	}
}