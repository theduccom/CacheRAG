#include <iostream>
#include <string>

using namespace std;

void solve()
{
	string str;
	while(getline(cin, str))
	{
		int n = str.size();
		for(int i = 0; i < 26; ++i)
		{
			string Ans = str;
			for(int j = 0; j < n; ++j)
			{
				if('a' <= Ans[j] && Ans[j] <= 'z')
				{
					if(Ans[j] + i > 'z')
					{
						Ans[j] += i;
						Ans[j] -= 26;
					}
					else
					{
						Ans[j] += i;
					}
				}
			}
			if(Ans.find("this") != string::npos || Ans.find("that") != string::npos || Ans.find("the") != string::npos)
			{
				cout << Ans << endl;
				break;
			}
		}
	}
}

int main()
{
	solve();
	return(0);
}