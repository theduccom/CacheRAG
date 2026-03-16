#include <iostream>

using namespace std;

void solve()
{
	int w;
	while(cin >> w, w != -1)
	{
		int sum = 1150;
		if(w >= 20)
		{
			sum += 1250;
			if(w >= 30)
			{
				sum += 1400 + 160 * (w - 30);
			}
			else
			{
				sum += 140 * (w - 20);
			}
		}
		else if(w >= 10)
		{
			sum += 125 * (w - 10);
		}
		cout << 4280 - sum << endl;
	}
}

int main()
{
	solve();
	return(0);
}