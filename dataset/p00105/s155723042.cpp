#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
typedef pair<string, vector<int> > P;

void solve()
{
	vector<P> Vec;
	string str;
	while(cin >> str)
	{
		int n;
		cin >> n;
		bool existFlag = false;
		for(int i = 0; i < Vec.size(); ++i)
		{
			if(Vec[i].first == str)
			{
				Vec[i].second.push_back(n);
				existFlag = true;
				break;
			}
		}
		if(!existFlag)
		{
			vector<int> V;
			V.push_back(n);
			Vec.push_back(make_pair(str, V));
		}
	}
	sort(Vec.begin(), Vec.end());
	for(int i = 0; i < Vec.size(); ++i)
	{
		cout << Vec[i].first << endl;
		sort(Vec[i].second.begin(), Vec[i].second.end());
		for(int j = 0; j < Vec[i].second.size() - 1; ++j)
		{
			cout << Vec[i].second[j] << " ";
		}
		cout << Vec[i].second[Vec[i].second.size() - 1] << endl;
	}
}

int main()
{
	solve();
	return(0);
}