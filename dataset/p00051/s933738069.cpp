#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		sort(s.begin(), s.end());
		int m = stoi(s);
		reverse(s.begin(), s.end());
		int M = stoi(s);
		cout << M - m << endl;
	}
	return 0;
}
