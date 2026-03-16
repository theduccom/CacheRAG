#include <iostream>
#include <set>

using namespace std;

void solve()
{
	int n;
	while(cin >> n, n)
	{
		multiset<int> Set;
		for(int i = 0; i < n; ++i)
		{
			int temp;
			cin >> temp;
			Set.insert(temp);
		}
		for(int i = 0; i < 10; ++i)
		{
			int temp = Set.count(i);
			for(int j = 0; j < temp; ++j)
			{
				cout << "*";
			}
			if(!temp)
			{
				cout << "-";
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