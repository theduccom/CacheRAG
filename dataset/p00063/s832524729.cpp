#include <iostream>
#include <string>

using namespace std;

void solve()
{
	string str;
	int count = 0;
	while(cin >> str)
	{
		bool flag = true;
		int n = str.size();
		for(int i = 0; i < n; ++i)
		{
			if(str[i] != str[n - i - 1])
			{
				flag = false;
				break;
			}
		}
		if(flag)
		{
			++count;
		}
	}
	cout << count << endl;
}

int main()
{
	solve();
	return(0);
}