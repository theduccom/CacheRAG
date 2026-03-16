#include <iostream>
#include <string>
using namespace std;

int main()
{
	long long int n,id,sale,k,cnt,flg;
	while (1)
	{
		long long int outid[4001] = { 0 }, total[4001] = {0};
		cin >> n;
		if (n == 0)break;
		cnt = 0;
		flg = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> id >> sale >> k;
			outid[i] = id;
			total[i] = sale*k;
		}

		for (int i = 0; i < n-1; i++)
		{
			for (int j = i+1; j < n; j++)
			{
				if (outid[i]==outid[j])
				{
					total[i] += total[j];
					cnt++;
				}
			}
		}

		for (int i = 0; i < n-cnt; i++)
		{
			if (total[i] >= 1000000)
			{
				cout << outid[i] << endl;
				flg = 1;
			}
		}

		if (flg==0)
		{
			cout << "NA" << endl;
		}
		
	}
	return 0;
}