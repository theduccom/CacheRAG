#include <iostream>
#include <vector>
#include <string>

using namespace std;

void solve()
{
	string str;
	while(cin >> str)
	{
		char field[11][12];
		for(int i = 0; i < 11; ++i)
		{
			for(int j = 0; j < 12; ++j)
			{
				field[i][j] = '0';
			}
		}
		for(int i = 0; i < str.size(); ++i)
		{
			field[0][i + 1] = str[i];
		}
		for(int i = 0; i < 7; ++i)
		{
			cin >> str;
			for(int j = 0; j < str.size(); ++j)
			{
				field[i + 1][j + 1] = str[j];
			}
		}
		for(int i = 0; i < 8; ++i)
		{
			for(int j = 1; j < 9; ++j)
			{
				if(field[i][j] == '1')
				{
					if(field[i][j + 1] == '1' && field[i + 1][j] == '1' && field[i + 1][j + 1] == '1')
					{
						cout << "A" << endl;
					}
					if(field[i + 1][j] == '1' && field[i + 2][j] == '1' && field[i + 3][j] == '1')
					{
						cout << "B" << endl;
					}
					if(field[i][j + 1] == '1' && field[i][j + 2] == '1' && field[i][j + 3] == '1')
					{
						cout << "C" << endl;
					}
					if(field[i + 1][j - 1] == '1' && field[i + 1][j] == '1' && field[i + 2][j - 1] == '1')
					{
						cout << "D" << endl;
					}
					if(field[i][j + 1] == '1' && field[i + 1][j + 1] == '1' && field[i + 1][j + 2] == '1')
					{
						cout << "E" << endl;
					}
					if(field[i + 1][j] == '1' && field[i + 1][j + 1] == '1' && field[i + 2][j + 1] == '1')
					{
						cout << "F" << endl;
					}
					if(field[i + 1][j - 1] == '1' && field[i + 1][j] == '1' && field[i][j + 1] == '1')
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