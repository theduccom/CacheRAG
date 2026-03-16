#include<iostream>
#include<string>
#include<vector>
#include<sstream>
using namespace  std;
vector<string> split(const string &s,char delimiter)
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
	int b = 0, c = 0;
	while (cin >> s)
	{
		vector<string> sv = split(s, ',');
		int a[3];
		for (int i = 0; i < sv.size(); i++)
		{
			stringstream ss;
			ss << sv[i];
			ss >> a[i];
		}
		if (a[0] * a[0] + a[1] * a[1] == a[2] * a[2])b++;
		else if(a[2] >= a[0] && a[2] >= a[1]) c++;
	}
	cout << b << endl;
	cout << c << endl;
	return 0;
}