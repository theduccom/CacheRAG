#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	while (cin >> a,a != 0)
	{	
		int d[10000] = {}, sum[10000] = {};
		for (int i = 0; i < a; i++)
		{
			cin >> d[i] >> b >> c;
			sum[i] = b + c;
			for (int j = 0; j < 2; j++)
			{
				if (sum[0] < sum[i])
				{
					swap(sum[i], sum[0]);
					swap(d[i], d[0]);
				}
			}

		}
		cout << d[0] << " " << sum[0] << endl;
	}
}