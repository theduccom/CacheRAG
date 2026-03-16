#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <string>
#include <functional>

using namespace std;

void solve()
{
	map<string, priority_queue<int, vector<int>, greater<int> > > Map;
	string str;
	int page;
	while(cin >> str >> page)
	{
		Map[str].push(page);
	}
	for(map<string, priority_queue<int, vector<int>, greater<int> > >::iterator Ite = Map.begin(); Ite != Map.end(); ++Ite)
	{
		cout << Ite->first << endl;
		bool FirstFlag = true;
		while(!Ite->second.empty())
		{
			if(FirstFlag)
			{
				cout << Ite->second.top();
				FirstFlag = false;
			}
			else
			{
				cout << " " << Ite->second.top();
			}
			Ite->second.pop();
		}
		cout << endl;
	}
}

int main()
{
	solve();
	return(0);
}