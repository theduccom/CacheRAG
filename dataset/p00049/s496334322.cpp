#include<vector>
#include<string>
#include<iostream>
using namespace  std;

vector<string> split(const string &s, char delimiter)
{
	vector<string> ret;
	size_t now = 0, find;
	while ((find = s.find_first_of(delimiter, now)) != string::npos)
	{
		ret.push_back(string(s, now, find - now));
		now = find + 1;
	}
	ret.push_back(string(s, now, s.size() - now));
	return ret;
}
int main()
{
	string s;
	int bin[] = {0,0,0,0};
	while (cin >> s)
	{
		vector<string> ss = split(s, ',');
		if (ss[1].size() == 2)
		{
			bin[2]++;
		}
		else if (ss[1][0] == 'A')
		{
			bin[0]++;
		}
		else if (ss[1][0] == 'B')
		{
			bin[1]++;
		}
		else
		{
			bin[3]++;
		}
	}
	for (int i = 0; i < 4; i++)cout << bin[i] << endl;
	return 0;
}