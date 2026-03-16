#include <vector>
#include <iostream>

using namespace std;

bool leap_year(int year)
{
	if (year % 400 == 0) { return true; }

	if (year % 100 == 0) { return false; }

	if (year % 4 == 0) { return true; }

	return false;
}

int main()
{
	vector<int> a;
	vector<int> b;

	while (true)
	{
		int temp[2];

		cin >> temp[0] >> temp[1];

		if (temp[0] == 0 && temp[1] == 0) { goto Exit; }

		a.push_back(temp[0]);
		b.push_back(temp[1]);
	}

Exit:;

	for (vector<int>::size_type i = 0; i < a.size(); i++)
	{
		int counter = 0;

		for (int j = a[i]; j <= b[i]; j++)
		{
			if (leap_year(j) == true) { cout << j << endl; counter++; }
		}

		if (counter == 0) { cout << "NA" << endl; }

		if (i != a.size() - 1) { cout << endl; }
	}

	return 0;
}