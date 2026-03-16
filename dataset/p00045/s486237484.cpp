#include<iostream>
#include<string>
#include<vector>
#include<sstream>
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
	int ave = 0;
	int sum = 0;
	int count = 0;
	while (cin >> s)
	{
		vector<string> line = split(s, ',');
		stringstream ss1;
		stringstream ss2;
		int a;
		int b;
		ss1 << line[0];
		ss1 >> a;
		ss2 << line[1];
		ss2 >> b;
		sum += a * b;
		ave += b;
		count++;
	}
	cout << sum << endl;
	double a, b;
	a = (ave / count) - ave * 1.0 / count;
	if (a < 0)a = -a;
	b = ((int)(ave * 1.0 / count + 0.5)) - ave * 1.0 / count;
	if (b < 0)b = -b;
	if (a >= b )cout << (int)(ave * 1.0 / count + 0.5) << endl;
	else cout << (ave /count) << endl;
	return 0;
}