#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
#include<functional>
using namespace std;

int main(void)
{
	string str;
	stringstream ss;

	int maxValue;
	int minValue;
	int n;
	cin >> n;
	while(n--)
	{
		cin >> str;

		sort(str.begin(), str.end());
		ss.str(str);
		ss >> minValue;
		ss.clear();

		reverse(str.begin(), str.end());
		ss.str(str);
		ss >> maxValue;
		ss.clear();

		cout << (maxValue-minValue) << endl;
	}
	return 0;
}