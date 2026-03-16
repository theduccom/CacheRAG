#include <iostream>
#include <string>

using namespace std;

void solve()
{
	string str;
	while(getline(cin, str))
	{
		for(int i = 0; i < str.size(); ++i)
		{
			if(str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= 32;
			}
			cout << str[i];
		}
		cout << endl;
	}
}

int main()
{
	solve();
	return(0);
}