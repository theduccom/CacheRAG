#include <iostream>
#include <string>

using namespace std;

void solve()
{
	int ans = 0;
	string str;
	while(cin >> str)
	{
		bool flag = true;
		for(int i = 0; i < str.size() / 2; ++i)
		{
			if(str[i] != str[str.size() - 1 - i])
			{
				flag = false;
				break;
			}
		}
		if(flag)
		{
			++ans;
		}
	}
	cout << ans << endl;
}

int main()
{
	solve();
	return(0);
}