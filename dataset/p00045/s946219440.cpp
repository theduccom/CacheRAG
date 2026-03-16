#include <iostream>
#include <stdio.h>

using namespace std;

void solve()
{
	int sum = 0;
	int q_sum = 0;
	int count = 0;
	int unit_price, quantity;
	while(~scanf("%d,%d", &unit_price, &quantity))
	{
		sum += unit_price * quantity;
		q_sum += quantity;
		++count;
	}
	cout << sum << endl;
	cout << (int)((double)q_sum / count + 0.5) << endl;
}

int main()
{
	solve();
	return(0);
}