#include <iostream>
#include <queue>
#include <vector>

using namespace std;

void solve()
{
	int m, n;
	while(cin >> m >> n)
	{
		if(!m && !n)
		{
			break;
		}
		priority_queue<int, vector<int> > PQue;
		for(int i = 0; i < m; ++i)
		{
			int price;
			cin >> price;
			PQue.push(price);
		}
		int sum = 0;
		while(true)
		{
			for(int i = 0; i < n - 1; ++i)
			{
				if(PQue.empty())
				{
					break;
				}
				sum += PQue.top();
				PQue.pop();
			}
			if(PQue.empty())
			{
				break;
			}
			PQue.pop();
		}
		cout << sum << endl;
	}
}

int main()
{
	solve();
	return(0);
}