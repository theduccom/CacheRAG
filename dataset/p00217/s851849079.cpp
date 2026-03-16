#include<iostream>

using namespace std;

struct str
{
	unsigned int p;
	unsigned int d1;
	unsigned int d2;
};

int main()
{
	while(true)
	{
		unsigned int n = 0;
		str info[10001];
		str max;

		cin >> n;

		if(n == 0)
		{
			return false;
		}

		for(unsigned int i = 0; i < n; i++)
		{
			cin >> info[i].p >> info[i].d1 >> info[i].d2;
		}

		// p = 番号 d1 d2 = 歩いた距離

		max = info[0];

		for(unsigned int i = 1; i < n; i++)
		{
			if(max.d1 + max.d2 < info[i].d1 + info[i].d2)
			{
				max = info[i];
			}
		}

		cout << max.p << " " << max.d1 + max.d2 << endl;
	}
}