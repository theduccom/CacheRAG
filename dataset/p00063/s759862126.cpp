#include <iostream>
#include <string>

using namespace std;

void solve()
{
	string str;
	int count = 0;
	while(cin >> str)
	{
		if(str.size() == 1)
		{
			count++; continue;
		}
		int size = str.size() - 1;
		int halfsize = str.size() / 2;
		bool flag = true;
		for(int i = 0; i < halfsize; ++i)
		{
			if(str[i] != str[size - i])
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