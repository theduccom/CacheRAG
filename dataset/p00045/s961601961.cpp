#include <iostream>
#include <stdio.h>

using namespace std;

void solve()
{
	int price, num;
	int sum = 0, count = 0, items = 0;
	while(scanf("%d,%d", &price, &num) != EOF)
	{
		++count;
		items += num;
		sum += price * num;
	}
	cout << sum << endl;
	cout << (int)(items / (double)count + 0.5) << endl;
}

int main()
{
	solve();
	return(0);
}