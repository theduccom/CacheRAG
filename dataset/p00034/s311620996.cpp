#include <iostream>

using namespace std;

void solve()
{
	int l[10];
	int v[2];
	while(~scanf("%d",&l[0]))
	{
		for(int i = 1; i < 10; ++i)
		{
			scanf(",%d", &l[i]);
		}
		scanf(",%d,%d", &v[0], &v[1]);
		int sum = 0;
		for(int i = 0; i < 10; ++i)
		{
			sum += l[i];
		}
		double pos = sum * (double)v[0] / (v[0] + v[1]);
		sum = 0;
		int count = 0;
		while(pos > sum)
		{
			sum += l[count];
			count++;
		}
		cout << count << endl;
	}
}

int main()
{
	solve();
	return(0);
}