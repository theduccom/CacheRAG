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

int p[10010];

int cnt;

int people;

int main(void)
{

	while (cin >> n, n)
	{
		fill(&p[0], &p[10010], -1);
		for (int i = 0; i < n; i++)
		{
			int pn, d1, d2;

			cin >> pn >> d1 >> d2;

			p[pn] = d1 + d2;
		}

		int ans = max_element(&p[0], &p[10010]) - p;



		

		cout << ans  << " " << p[ans] << endl;

	}
	return 0;
}
