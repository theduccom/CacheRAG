#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

void solve()
{
	int n;
	char c;
	scanf("%d%c", &n, &c);
	while(n--)
	{
		string str;
		getline(cin, str);
		for(int i = 0; i < str.size(); ++i)
		{
			if(str[i] == 'H' && i + 6 < str.size() && str[i + 1] == 'o' && str[i + 2] == 's' && str[i + 3] == 'h' && str[i + 4] == 'i' && str[i + 5] == 'n' && str[i + 6] == 'o')
			{
				str[i + 6] = 'a';
				i += 6;
			}
		}
		cout << str << endl;
	}
}

int main()
{
	solve();
	return(0);
}