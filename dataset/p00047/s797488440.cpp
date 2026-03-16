#include <iostream>
#include <stdio.h>

using namespace std;

void solve()
{
	int a[3] = {1, 0, 0};
	char from, to, c;
	while(scanf("%c,%c%c", &from, &to, &c) != EOF)
	{
		if(from == 'A')
		{
			if(to == 'B')
			{
				int temp = a[0];
				a[0] = a[1];
				a[1] = temp;
			}
			else
			{
				int temp = a[0];
				a[0] = a[2];
				a[2] = temp;
			}
		}
		else if(from == 'B')
		{
			if(to == 'A')
			{
				int temp = a[0];
				a[0] = a[1];
				a[1] = temp;
			}
			else
			{
				int temp = a[1];
				a[1] = a[2];
				a[2] = temp;
			}
		}
		else
		{
			if(to == 'B')
			{
				int temp = a[1];
				a[1] = a[2];
				a[2] = temp;
			}
			else
			{
				int temp = a[0];
				a[0] = a[2];
				a[2] = temp;
			}
		}
	}
	if(a[0] == 1)
	{
		cout << "A" << endl;
	}
	else if(a[1] == 1)
	{
		cout << "B" << endl;
	}
	else if(a[2] == 1)
	{
		cout << "C" << endl;
	}
}

int main()
{
	solve();
	return(0);
}