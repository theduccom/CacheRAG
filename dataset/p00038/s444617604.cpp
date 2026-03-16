#include<iostream>
#include<vector>
#include<string>
#include<sstream>
#include<algorithm>
using namespace  std;

vector<string> ss(5);
vector<int> vv(5);
int num[13];

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
bool isFourCard(vector<int> vv)
{
	for (int i = 0; i < 13; i++)
	{
		if (num[i] == 4)return true;
	}
	return false;
}
bool isFullhouse(vector<int> vv)
{
	for (int i = 0; i < 12; i++)
	{
		for (int j = i + 1; j < 13; j++)
		{
			if (num[i] + num[j] == 5)return true;
		}
	}
	return false;
}
bool isStraight(vector<int> vv)
{
	for (int i = 0; i < 10; i++)
	{
		int j = i % 13;
		int count = 0;
		while (num[j] == 1)
		{
			count++;
			j = (j + 1) % 13;
		}
		if (count == 5)return true;
	}
	return false;
}
bool isThreeCard(vector<int> vv)
{
	for (int i = 0; i < 13; i++)
	{
		if (num[i] == 3)return true;
	}
	return false;
}
bool isTwoPair(vector<int> vv)
{
	int count = 0;
	for (int i = 0; i < 13; i++)
	{
		if (num[i] == 2)count++;
	}
	return count == 2;
}
bool isOnePair(vector<int> vv)
{
	for (int i = 0; i < 13; i++)
	{
		if (num[i] == 2)return true;
	}
	return false;
}
string judge(vector<int> vv)
{
	if (isFourCard(vv))
	{
		return "four card";
	}
	else if (isFullhouse(vv))
	{
		return "full house";
	}
	else if (isStraight(vv))
	{
		return "straight";
	}
	else if (isThreeCard(vv))
	{
		return "three card";
	}
	else if (isTwoPair(vv))
	{
		return "two pair";
	}
	else if (isOnePair(vv))
	{
		return "one pair";
	}
	return "null";
}
int main()
{
	string s;
	while (cin >> s)
	{
		ss = split(s, ',');
		for (int i = 0; i < 14; i++)num[i] = 0;
		for (int i = 0; i < 5; i++)
		{
			stringstream str;
			str << ss[i];
			str >> vv[i];
			num[vv[i] - 1]++;
		}
		sort(vv.begin(), vv.end());
		cout << judge(vv) << endl;
	}
	return 0;
}