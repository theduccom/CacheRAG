#include <iostream>
#include <map>

using namespace std;

void solve()
{
	int a[5];
	char temp;
	while(~scanf("%d,%d,%d,%d,%d%c", &a[0], &a[1], &a[2], &a[3], &a[4], &temp))
	{
		map<int, int> Map;
		for(int i = 0; i < 5; ++i)
		{
			Map[a[i]]++;
		}
		if(Map.size() == 2)
		{
			map<int, int>::iterator Ite = Map.begin();
			if(Ite->second == 1 || Ite->second == 4)
			{
				cout << "four card" << endl;
			}
			else if(Ite->second == 2 || Ite->second == 3)
			{
				cout << "full house" << endl;
			}
		}
		else if(Map.size() == 3)
		{
			for(map<int, int>::iterator Ite = Map.begin(); Ite != Map.end(); ++Ite)
			{
				if(Ite->second == 2)
				{
					cout << "two pair" << endl;
					break;
				}
				else if(Ite->second == 3)
				{
					cout << "three card" << endl;
					break;
				}
			}
		}
		else if(Map.size() == 4)
		{
			cout << "one pair" << endl;
		}
		else
		{
			map<int, int>::iterator Ite = Map.begin();
			map<int, int>::iterator IteNext = Map.begin();
			++IteNext;
			map<int, int>::iterator IteEnd = Map.end();
			IteEnd--;
			if(IteEnd->first - Ite->first == 4 || IteNext->first - Ite->first == 9)
			{
				cout << "straight" << endl;
			}
			else
			{
				cout << "null" << endl;
			}
		}
	}
}

int main()
{
	solve();
	return(0);
}