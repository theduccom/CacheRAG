#include <iostream>

using namespace std;

void solve()
{
	int a, b;
	bool firstFlag = true;
	while(cin >> a >> b)
	{
		if(a == 0 && b == 0)
		{
			break;
		}
		if(!firstFlag)
		{
			cout << endl;
		}
		bool existFlag = false;
		for(int i = a; i <= b; ++i)
		{
			if(i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
			{
				cout << i << endl;
				existFlag = true;
			}
		}
		if(!existFlag)
		{
			cout << "NA" << endl;
		}
		firstFlag = false;
	}
}

int main()
{
	solve();
	return(0);
}