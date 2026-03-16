#include <iostream>
using namespace std;
int main()
{
	int n, i, j;
	while (cin >> n && n)
	{
		unsigned long long int no, t, num, sum[4000] = {0}, a[4000], f[4000] = {0};
		for (i = 0, j = 0; i < n; i++)
		{
			cin >> no >> t >> num;
			if (!f[no-1] && (sum[no-1] += t * num) >= 1000000)
			{
				a[j] = no;
				f[no-1] = 1;
				j++;
			}
		}
		if (j == 0)
			cout << "NA" << endl;
		else
			for (i = 0; i < j; i++)
				cout << a[i] << endl;
	}
	return 0;
}