#include <iostream>
#include<queue>
#include <map>
#include <string>
using namespace std;
map<string, int> table;
int dir[4] = { 1,-1,4,-4 };
void bfs()
{
	string st = "01234567";
	table[st] = 1;
	queue<string> s;
	s.push(st);
	while (s.size())
	{
		st = s.front();
		s.pop();
		int num = st.find('0');
		for (int i = 0; i <= 3; ++i)
		{
			int tn = num + dir[i];
			if (tn < 0 || tn>7 || num == 3 && dir[i] == 1 || num == 4 && dir[i] == -1)
				continue;
			string tmp = st;
			swap(tmp[tn], tmp[num]);
			if (!table[tmp])
			{
				s.push(tmp);
				table[tmp] = table[st] + 1;
			}
		}
	}
}
int main()
{
	char x;
	string str;
	bfs();
	while (cin>>x)
	{
		str.push_back(x);
		for (int i = 1; i <= 7; ++i)
		{
			cin >> x;
			str.push_back(x);
		}
		cout << table[str]-1 << endl;
		str.clear();
	}
	return 0;
}