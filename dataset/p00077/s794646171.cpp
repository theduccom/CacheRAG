#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;
int main()
{
	int n, i, j, c;
	char s[101] = "", r[101] = "", t;
	while (cin >> s, !cin.eof())
	{
		c = 0;
		for (i = 0; i < strlen(s); i++)
		{
			if (s[i] == '@')
			{
				t = s[i+1];
				n = atoi(&t);
				for (j = 0; j < n; j++)
				{
					r[c] = s[i+2];
					c++;
				}
				i += 2;
			}
			else
			{
				r[c] = s[i];
				c++;
			}
		}
		r[c] = '\0';
		cout << r << endl;
	}
}