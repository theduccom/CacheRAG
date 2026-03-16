#include <iostream>
#include <map>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

void solve()
{
	int N;
	while(cin >> N, N)
	{
		set<int> Set;
		vector<int> ID(N);
		map<int, unsigned long long int> Map;
		bool Flag = false;
		unsigned long long int b, c;
		for(int i = 0; i < N; ++i)
		{
			cin >> ID[i] >> b >> c;
			Map[ID[i]] += b * c;
		}
		for(int i = 0; i < N; ++i)
		{
			if(Map[ID[i]] >= 1000000)
			{
				if(!Set.count(ID[i]))
				{
					cout << ID[i] << endl;
					Set.insert(ID[i]);
					Flag = true;
				}
			}
		}
		if(!Flag)
		{
			cout << "NA" << endl;
		}
	}
}

int main()
{
	solve();
	return(0);
}