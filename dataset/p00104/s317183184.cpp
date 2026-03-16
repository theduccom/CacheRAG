#include <iostream>
using namespace std;

int main()
{
	bool f;
	int w,h,x,y;
	char t[128][128];

	while(cin >> h >> w, (h||w))
	{
		for(int i=0; i<h; i++)
		{
			cin >> t[i];
		}
	
		f=true;
		x=y=0;
		while(f)
		{
			switch(t[y][x])
			{
				case 0:
					cout << "LOOP" << endl;
					f=false;
					break;

				case '.':
					cout << x << " " << y << endl;
					f=false;
					break;

				case '>':
					t[y][x] = 0; x++;
					break;

				case '<':
					t[y][x] = 0; x--;
					break;

				case 'v':
					t[y][x] = 0; y++;
					break;

				case '^':
					t[y][x] = 0; y--;
					break;
			}
		}

	}
	return 0;
}