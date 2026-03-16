#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<iostream>
#include<string>
#include<algorithm>
#include<queue>
#include<utility>

using namespace std;

int n;

int c;

int ice[10];

int main(void)
{
	while (cin >> n, n)
	{
		for (int i = 0; i < n; i++)
		{
			cin >> c;

			ice[c]++;
		}

		for (int i = 0; i < 10; i++)
		{
			if (ice[i] == 0)
			{
				cout << "-" << endl;

				continue;
			}

			for (int j = 0; j < ice[i]; j++)
			{
				cout << "*";
			}

			cout << endl;
		}

		fill(&ice[0], &ice[10], 0);
	}

	return 0;
}
