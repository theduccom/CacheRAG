#include<iostream>
using namespace std;

int main()
{
	int ln;
	int weit[] = {1,2,4,8,16,32,64,128,256,512};
	bool fl;
	int n;

	
	while (cin >> n)
	{
		ln = 0;
		fl = 0;
		bool two[20] = { 0 };
		while (n)
		{
			two[ln] = n % 2;
			n /= 2;

			ln++;
		}

		int i;
		for (i = 0; i < ln; i++)
		{
			if (two[i]==1)
			{
				if (fl)
				{
					cout << " ";
				}
				fl = true;
				cout << weit[ i ];
			}
		}
		cout << endl;
	}

	return 0;
}