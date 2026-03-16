#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <algorithm>

using namespace std;
typedef pair<string, int> p;

void solve()
{
	vector<p> data;
	set<string> word;
	string str;
	while(cin >> str)
	{
		int num;
		cin >> num;
		p object(str, num);
		data.push_back(object);
		word.insert(str);
	}
	sort(data.begin(), data.end());
	set<string>::iterator it = word.begin();
	int pos = 0;
	while(it != word.end())
	{
		cout << *it << endl;
		bool flag = false;
		while(pos < data.size() && *it == data[pos].first)
		{
			if(flag)
			{
				cout << " ";
			}
			cout << data[pos].second;
			++pos;
			flag = true;
		}
		cout << endl;
		++it;
	}
}

int main()
{
	solve();
	return(0);
}