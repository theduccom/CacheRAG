#include <iostream>

using namespace std;

void solve()
{
	int n;
	while(cin >> n, n)
	{
		int count[10] = {0};
		while(n--)
		{
			int num;
			cin >> num;
			++count[num];
		}
		for(int i = 0; i < 10; ++i)
		{
			if(count[i] == 0)
			{
				cout << "-" << endl;
				continue;
			}
			for(int j = 0; j < count[i]; ++j)
			{
				cout << "*";
			}
			cout << endl;
		}
	}
}

int main()
{
	solve();
	return(0);
}