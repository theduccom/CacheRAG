#include <iostream>
using namespace std;

int main()
{
	while(!cin.eof())
	{
		long a[8] = {0};
		for(int i = 0; i < 8; i++)
		{
			long x;
			cin >> x;
			for(int j = 0; j < 8; j++)
			{
				a[i] += (x % 10) << j;
				x /= 10;
			}
		}
		if(cin.eof())
			break;

		char c = 'A';
		for(int i = 0; i < 7; i++)
			for(int j = 0; j < 7; j++)
				if(a[i] == 3 << j)
					if(a[i + 1] == 3 << j)
						goto END;

		c = 'B';
		for(int i = 0; i < 5; i++)
			for(int j = 0; j < 8; j++)
				if(a[i] == (1 << j))
					if(a[i + 1] == (1 << j))
					{
						//cout << "B " << (1 << j) << endl;
						goto END;
					}

		c = 'C';
		for(int i = 0; i < 8; i++)
			for(int j = 0; j < 5; j++)
			{
				//cout << 'C' << ' ' << (15 << j) << endl;
				if(a[i] == 15 << j)
					goto END;

			}
		c = 'D';
		for(int i = 0; i < 6; i++)
			for(int j = 0; j < 7; j++)
				if(a[i] == 1 << j)
					if(a[i + 1] == 3 << j)
						goto END;

		c = 'E';
		for(int i = 0; i < 7; i++)
			for(int j = 0; j < 7; j++)
				if(a[i] == 3 << j)
					if(a[i + 1] == 3 << (j-1))
						goto END;

		c = 'F';
		for(int i = 0; i < 6; i++)
			for(int j = 0; j < 8; j++)
				if(a[i] == 1 << j)
					goto END;

		c = 'G';
		for(int i = 0; i < 7; i++)
			for(int j = 0; j < 6; j++)
				if(a[i] == 3 << j)
					if(a[i + 1] == 3 << (j + 1))
						goto END;

		cout << "error" << endl;
		break;

	END:
		cout << c << endl;
	}
	return 0;
}