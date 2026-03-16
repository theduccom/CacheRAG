#include <iostream>
#include <cstdio>
#include <string>
#include <sstream>
#include <algorithm>
#include <math.h>
#include <map>
#include <iomanip>
#include <vector>
#include <queue>

using namespace std;



int main()
{
	map<string, vector<int> > index;
	string s;
	int n;
	
	while (cin >> s >> n)
	{
		index[s].push_back(n);
		sort(index[s].begin(), index[s].end());
	}
	
	map<string, vector<int> >::const_iterator it;
	vector<int>::const_iterator it2;
	for (it=index.begin(); it!=index.end(); it++)
	{
		cout << (*it).first << endl;
		for (it2=(*it).second.begin(); it2!=(*it).second.end()-1; it2++)
		{
			cout << (*it2) << " ";
		}
		cout << (*it2) << endl;
	}
	
	return 0;
}