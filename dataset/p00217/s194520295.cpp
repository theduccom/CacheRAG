#include <iostream>
using namespace std;

int main()
{
	int n;
	while(cin >> n, n)
	{
		int p,d1,d2;
		int maxp,maxd=-1;
		while(n--)
		{
			cin >> p >> d1 >> d2;
			if(maxd < d1+d2)
			{
				maxp = p;
				maxd = d1+d2;
			}
		}

		cout << maxp << " " << maxd << endl;
	}
}