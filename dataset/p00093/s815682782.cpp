#include <iostream>
#include <string>
using namespace std;

int main()
{
	int a, b,first=0;
	while (cin>>a>>b)
	{
		if ((a == 0) && (b == 0)) break;
		int flg = 0;
		if (first!=0)
		{
			cout << endl;
		}
		while (a<=b)
		{
			if ((a % 4 == 0) && (a % 100 != 0 || a%400==0))
			{
				cout << a << endl;
				flg = 1;
			}
			a++;
		}
		if (flg==0)
		{
			cout << "NA" << endl;
		}
		first = 1;
	}
	return 0;
}