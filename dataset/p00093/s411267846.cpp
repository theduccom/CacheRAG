#include <iostream>

using namespace std;

void solve()
{
	int a, b;
	bool init = true;
	while(cin >> a >> b, a || b)
	{
		if(!init)
		{
			cout << endl;
		}
		init = false;
		bool ok = false;
		for(int i = a; i <= b; ++i)
		{
			if((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
			{
				cout << i << endl;
				ok = true;
			}
		}

		if(!ok)
		{
			cout << "NA" << endl;
		}
	}
}

int main()
{
	solve();
	return(0);
}