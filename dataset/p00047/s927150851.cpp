#include <iostream>

using namespace std;

void solve()
{
	int pos = 0;
	char a, b, temp;
	while(~scanf("%c,%c%c", &a, &b, &temp))
	{
		if(pos + 'A' == a)
		{
			pos = b - 'A';
		}
		else if(pos + 'A' == b)
		{
			pos = a - 'A';
		}
	}
	printf("%c\n", pos + 'A');
}

int main()
{
	solve();
	return(0);
}