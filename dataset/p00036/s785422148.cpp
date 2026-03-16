#include <iostream>
#include <string>
#include <map>
using namespace std;

typedef pair<int, int> p;
p shapes[7][3] = 
{
	{ p(1, 0), p(0, 1), p(1, 1)		},
	{ p(0, 1), p(0, 2), p(0, 3)		},
	{ p(1, 0), p(2, 0), p(3, 0)		},
	{ p(0, 1), p(-1, 1), p(-1, 2)	},
	{ p(1, 0), p(1, 1), p(2, 1)		},
	{ p(0, 1), p(1, 1), p(1, 2)		},
	{ p(1, 0), p(0, 1), p(-1, 1)	}
};
string table[8];

int main()
{
	while (true)
	{
		for (int i = 0; i < 8; i++)
		{
			if (!(cin >> table[i])) return 0;
		}

		p upperLeft;
		for (int y = 0; y < 8; y++)
		{
			for (int x = 0; x < 8; x++)
			{
				if (table[y][x] == '1')
				{
					upperLeft = p(x, y);
					goto Break;
				}
			}
		}
		Break:

		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				int X = upperLeft.first + shapes[i][j].first;
				int Y = upperLeft.second + shapes[i][j].second;
				if (!(0 <= X && X < 8 && 0 <= Y && Y < 8)) break;
				if (table[Y][X] == '0') break;
				if (j == 2) cout << char('A' + i) << endl;
			}
		}
	}

	return 0;
}