#include <iostream>

using namespace std;

void solve()
{
	char field[11][12];
	char a;
	while(cin >> a)
	{
		for(int i = 0; i < 11; ++i)
		{
			for(int j = 0; j < 12; ++j)
			{
				field[i][j] = '0';
			}
		}
		field[1][1] = a;
		for(int i = 2; i < 9; ++i)
		{
			cin >> field[1][i];
		}
		for(int i = 2; i < 9; ++i)
		{
			for(int j = 1; j < 9; ++j)
			{
				cin >> field[i][j];
			}
		}
		for(int i = 1; i < 9; ++i)
		{
			for(int j = 1; j < 9; ++j)
			{
				if(field[i][j] == '1')
				{
					if(field[i][j + 1] == '1' && field[i + 1][j] == '1' && field[i + 1][j + 1] == '1')
					{
						cout << "A" << endl;
					}
					else if(field[i + 1][j] == '1' && field[i + 2][j] == '1' && field[i + 3][j] == '1')
					{
						cout << "B" << endl;
					}
					else if(field[i][j + 1] == '1' && field[i][j + 2] == '1' && field[i][j + 3] == '1')
					{
						cout << "C" << endl;
					}
					else if(field[i + 1][j] == '1' && field[i + 1][j - 1] == '1' && field[i + 2][j - 1] == '1')
					{
						cout << "D" << endl;
					}
					else if(field[i][j + 1] == '1' && field[i + 1][j + 1] == '1' && field[i + 1][j + 2] == '1')
					{
						cout << "E" << endl;
					}
					else if(field[i + 1][j] == '1' && field[i + 1][j + 1] == '1' && field[i + 2][j + 1] == '1')
					{
						cout << "F" << endl;
					}
					else if(field[i][j + 1] == '1' && field[i + 1][j] == '1' && field[i + 1][j - 1] == '1')
					{
						cout << "G" << endl;
					}
					break;
				}
			}
		}
	}
}

int main()
{
	solve();
	return(0);
}