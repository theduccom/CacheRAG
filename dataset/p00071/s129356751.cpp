#include <iostream>
#include <string>

using namespace std;

int mass[8][8];

void Bombs_Chain(int y, int x)
{
	if(mass[y][x]==1)
	{
		mass[y][x] = 0;
		
		for(int i=1; i<=3; i++)
		{
			if(x+i < 8)    Bombs_Chain(y, x+i);
			if(x-i > -1)   Bombs_Chain(y, x-i);
			if(y+i < 8)    Bombs_Chain(y+i, x);
			if(y-i > -1)   Bombs_Chain(y-i, x);
		}
	}
}

int main()
{
	int n, x, y;
	string str;

	cin >> n;

	for(int i=0; i<n; i++)
	{
		for(int j=0; j<8; j++)
		{
			cin >> str;

			for(int k=0; k<8; k++)
			{
				mass[j][k] = (str[k]=='1') ? 1 : 0;
			}
		}

		cin >> x >> y;

		Bombs_Chain(y-1, x-1);

		cout << "Data " << i+1 << ":" << endl;

		for(int j=0; j<8; j++)
		{
			for(int k=0; k<8; k++)
			{
				cout << mass[j][k];
			}
			cout << endl;
		}
	}

	return 0;
}