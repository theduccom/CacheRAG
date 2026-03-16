#include <iostream>
#include <string.h>

using namespace std;
int weight[] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};
void solve()
{
	int a;
	while(cin >> a)
	{
		bool flag[10];
		memset(flag, 0, sizeof(bool)  * 10);
		for(int i = 9; i >= 0; --i)
		{
			if(a / weight[i])
			{
				flag[i] = true;
			}
			a %= weight[i];
		}
		int pos = 0;
		for(int i = 0; i < 10; ++i)
		{
			if(flag[i])
			{
				cout << weight[i];
				pos = i;
				break;
			}
		}
		for(int i = pos + 1; i < 10; ++i)
		{
			if(flag[i])
			{
				cout << " " << weight[i];
			}
		}
		cout << endl;
	}
}

int main()
{
	solve();
	return(0);
}