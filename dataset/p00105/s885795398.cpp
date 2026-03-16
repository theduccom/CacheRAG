#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int p,i;
	string s;
	map<string,vector<int> > dt;
	while(cin >> s >> p)
	{
		dt[s].push_back(p);
	}

	for(map<string,vector<int> >::iterator it=dt.begin(); it!=dt.end(); it++)
	{
		cout << it->first << endl;
		sort(it->second.begin(),it->second.end());
		for(i=0; i<it->second.size()-1; i++)
		{
			cout << it->second[i] << " ";
		}
		cout << it->second[i] << endl;
	}

	return 0;
}