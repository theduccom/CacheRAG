#include <iostream>
#include <algorithm>
#include <string>
#include <functional>
#include <math.h>
using namespace std;

int main()
{
	int n;
	string str;

	cin >> n;

	while (n--)
	{
		cin >> str;

		int Min = 0, Max = 0;

		sort(str.begin(), str.end());
		for (int i = 0; i < 8; i++) Max += pow(10, i) * (str[i] - '0');

		sort(str.begin(), str.end(), greater<int>());
		for (int i = 0; i < 8; i++) Min += pow(10, i) * (str[i] - '0');

		cout << Max - Min << endl;
	}

	return 0;
}