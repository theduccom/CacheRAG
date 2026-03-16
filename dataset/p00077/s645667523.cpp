#include <iostream>
#include <string>

#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
	string s;
	while(cin >> s)
	{
		rep(i,s.size())
		{
			if(s[i] == '@')
			{
				int count = s[i+1] - '0';
				rep(j,count)
				{
					cout << s[i+2];
				}
				i += 2;
			}
			else
			{
				cout << s[i];
			}
		}
		cout << endl;
	}
	return 0;
}