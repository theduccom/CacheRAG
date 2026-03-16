#include <iostream>

using namespace std;

void solve()
{
	int rect = 0;
	int diamond = 0;
	int a, b, c;
	while(~scanf("%d,%d,%d", &a, &b, &c))
	{
		if(a * a + b * b == c * c)
		{
			++rect;
		}
		else if(a == b)
		{
			++diamond;
		}
	}
	cout << rect << endl;
	cout << diamond << endl;
}

int main()
{
	solve();
	return(0);
}