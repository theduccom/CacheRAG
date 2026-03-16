#include <iostream>
#define REP(i,k,n) for(int i=k;i<n;i++)
using namespace std;

int main()
{
	bool first = false;
	int a,b;
	while(cin >> a >> b && a && b)
	{
		if(first)
		{
			cout << endl;
		}
		else
		{
			first = true;
		}

		bool flag = true;
		REP(i,a,b+1)
		{
			if(i%400 == 0)
			{
				flag = false;
				cout << i << endl;
			}
			else if(i%100 != 0 && i%4 == 0)
			{
				flag = false;
				cout << i << endl;
			}
		}

		if(flag)
		{
			cout << "NA" << endl;
		}
	}
	return 0;
}