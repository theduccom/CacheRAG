#include <string>
#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

int main()
{
	const int DATASETS = 1000;

	int n, MAX, MIN;

	string S[DATASETS], MAX1, MIN1;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> S[i];
	}

	for (int i = 0; i < n; i++)
	{
		MAX1 = S[i]; sort(MAX1.begin(), MAX1.end(), greater<char>());
		MIN1 = S[i]; sort(MIN1.begin(), MIN1.end());

		MAX = stoi(const_cast<const string&>(MAX1));
		MIN = stoi(const_cast<const string&>(MIN1));

		cout << MAX - MIN << endl;
	}

	return 0;
}