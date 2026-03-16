#include <iostream>

using namespace std;

void solve()
{
	int x, y, z;
	int rect_count = 0;
	int lozenge_count = 0;
	while(~scanf("%d,%d,%d", &x, &y, &z))
	{
		if(x * x + y * y - z * z == 0)
		{
			rect_count++;
		}
		else if(x == y)
		{
			lozenge_count++;
		}
	}
	cout << rect_count << endl;
	cout << lozenge_count << endl;
}

int main()
{
	solve();
	return(0);
}