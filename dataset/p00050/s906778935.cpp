#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int i, j, c;
	char s[1001], t[6]="apple", u[6]="peach", r[1001], x[6];
	bool f = false;
	cin.getline(s, sizeof(s));
	i = 0;
	while (1)
	{
		if (!f)
			c = 0;
		switch (s[i+c])
		{
		case 'a':
			if (c == 0 || c == 2)
			{
				f = true;
				x[c] = 'a';
				c++;
			}
			else
			{
				r[i] = s[i];
				i++;
			}
			break;
		case 'p':
			if (0 <= c && c <= 2)
			{
				f = true;
				x[c] = 'p';
				c++;
			}
			else
			{
				r[i] = s[i];
				i++;
			}
			break;
		case 'l':
			if (c == 3)
			{
				f = true;
				x[c] = 'l';
				c++;
			}
			else
			{
				r[i] = s[i];
				i++;
			}
			break;
		case 'e':
			if (c == 1 || c == 4)
			{
				f = true;
				x[c] = 'e';
				c++;
			}
			else
			{
				r[i] = s[i];
				i++;
			}
			break;
		case 'c':
			if (c == 3)
			{
				f = true;
				x[c] = 'c';
				c++;
			}
			else
			{
				r[i] = s[i];
				i++;
			}
			break;
		case 'h':
			if (c == 4)
			{
				f = true;
				x[c] = 'h';
				c++;
			}
			else
			{
				r[i] = s[i];
				i++;
			}
			break;
		default:
			r[i] = s[i];
			i++;
		}
		if (c >= 5)
		{
			x[c] = '\0';
			if (strcmp(x, t) == 0)
				for (j = 0; j < 5; j++, i++)
					r[i] = u[j];
			if (strcmp(x, u) == 0)
				for (j = 0; j < 5; j++, i++)
					r[i] = t[j];
			f = false;
		}
		if (i >= strlen(s))
			break;
	}
	r[strlen(s)] = '\0';
	cout << r << endl;
}