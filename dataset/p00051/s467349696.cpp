#include <string>
#include <algorithm>
#include <iostream>
#include <sstream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	while (N--)
	{
		string str;
		cin >> str;

		stringstream ss;
		int Min, Max;
		sort(str.begin(), str.end());
		ss << str;
		ss >> Min;
		ss.clear();
		ss.str("");
		sort(str.rbegin(), str.rend());
		ss << str;
		ss >> Max;

		cout << Max-Min << endl;
	}
}