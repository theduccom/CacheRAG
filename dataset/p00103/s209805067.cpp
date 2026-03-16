#include<iostream>
#include<string>
using namespace std;
int main()
{
	int out = 0;
	int r1 = 0;
	int r2 = 0;
	int r3 = 0;
	int t = 0;
	string k;
	int a = 0;
	cin >> a;
	for (int i = 1; i <= a; i++)
	{
		out = 0;
		t = 0;
		r1 = 0;
		r2 = 0;
		r3 = 0;
		while (out != 3)
		{
			cin >> k;
			if (k == "OUT")
			{
				out++;
			}
			if (k == "HIT")
			{
				if (r3 == 1)
				{
					t++;
					r3 = 0;
				}
				if (r2 == 1)
				{
					r3 = 1;
					r2 = 0;
				}
				if (r1 == 1)
				{
					r2 = 1;
					r1 = 0;
				}
				r1 = 1;
			}
			if (k == "HOMERUN")
			{
				if (r3 == 1)
				{
					t++;
					r3 = 0;
				}
				if (r2 == 1)
				{
					t++;
					r2 = 0;
				}
				if (r1 == 1)
				{
					t++;
					r1 = 0;
				}
				t++;

			}
		}
		cout << t << endl;
	}
	
	return 0;
}