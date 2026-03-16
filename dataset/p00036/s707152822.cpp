#include <iostream>

using namespace std;

void solve()
{
	char F11;
	char Field[13][13];
	while(cin >> F11)
	{
		for(int i = 0; i < 13; ++i)
		{
			for(int j = 0; j < 13; ++j)
			{
				Field[i][j] = '2';
			}
		}
		Field[1][1] = F11;
		for(int i = 2; i < 9; ++i)
		{
			cin >> Field[1][i];
		}
		for(int i = 2; i < 9; ++i)
		{
			for(int j = 1; j < 9; ++j)
			{
				cin >> Field[i][j];
			}
		}
		for(int i = 1; i < 9; ++i)
		{
			for(int j = 1; j < 9; ++j)
			{
				if(Field[i][j] == '1')
				{
					if(Field[i][j + 1] == '1' && Field[i + 1][j] == '1' && Field[i + 1][j + 1] == '1')
					{
						cout << "A" << endl;
					}
					else if(Field[i + 1][j] == '1' && Field[i + 2][j] == '1' && Field[i + 3][j] == '1')
					{
						cout << "B" << endl;
					}
					else if(Field[i][j + 1] == '1' && Field[i][j + 2] == '1' && Field[i][j + 3] == '1')
					{
						cout << "C" << endl;
					}
					else if(Field[i + 1][j - 1] == '1' && Field[i + 1][j] == '1' && Field[i + 2][j - 1] == '1')
					{
						cout << "D" << endl;
					}
					else if(Field[i][j + 1] == '1' && Field[i + 1][j + 1] == '1' && Field[i + 1][j + 2] == '1')
					{
						cout << "E" << endl;
					}
					else if(Field[i + 1][j] == '1' && Field[i + 1][j + 1] == '1' && Field[i + 2][j + 1] == '1')
					{
						cout << "F" << endl;
					}
					else if(Field[i][j + 1] == '1' && Field[i + 1][j - 1] == '1' && Field[i + 1][j] == '1')
					{
						cout << "G" << endl;
					}
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