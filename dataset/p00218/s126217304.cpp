#include<iostream>
using namespace std;
int main()
{
	while (true)
	{
		int s, m = 0, e = 0, j = 0, sum[7];
		cin >> s;
		if (s == 0)break;
		for (int i = 0; i < s; i++)
		{
			cin >> m >> e >> j;
			if (m == 100 || e == 100 || j == 100)
			{
				cout << "A" << endl;
			}
			else
			{
				sum[0] = (m + e) / 2;
				if (sum[0] >= 90)
				{
					cout << "A" << endl;
				}
				else
				{
					sum[1] = (m + e + j) / 3;
					if (sum[1] >= 80)
					{
						cout << "A" << endl;
					}
					else
					{
						if (sum[1] >= 70)
						{
							cout << "B" << endl;
						}
						else
						{

							if (sum[1] >= 50 && m >= 80 || e >= 80)
							{
								cout << "B" << endl;
							}
							else cout << "C" << endl;
						}
					}
				}
			}
		}
	}
}