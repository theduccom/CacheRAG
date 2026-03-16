#include<iostream>

using namespace std;

int main()
{
	while(true)
	{
		int n = 0;
		int ice[10001];

		for(int i = 0; i < 10001; i++)
		{
			ice[i] = 0;
		}

		cin >> n;

		if(n == 0)
		{
			return false;
		}

		for(int i = 0; i < n; i++)
		{
			int tmp;
			cin >> tmp;

			ice[tmp]++;
		}

		for(int i = 0; i < 10; i++)
		{
			if(ice[i] == 0)
			{
				cout << '-';
			}

			else
			{
				while(ice[i] != 0)
				{
					cout << '*';
					ice[i]--;
				}
			}

			cout << endl;
		}
	}
}