#include <iostream>

using namespace std;

void solve()
{
	int a, b;
	int sum = 0;
	int num = 0;
	int count = 0;
	while(~scanf("%d,%d", &a, &b))
	{
		count++;
		sum += a * b;
		num += b;
	}
	cout << sum << endl;
	cout << (int)((double)num / count + 0.5) << endl;
}

int main()
{
	solve();
	return(0);
}