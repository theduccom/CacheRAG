#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void rec(string *field, int y, int x)
{
	field[y][x]='0';
	if (y>0 && field[y-1][x]=='1')rec(field,y-1,x);
	if (x>0 && field[y][x-1]=='1')rec(field,y,x-1);
	if (y<11 && field[y+1][x]=='1')rec(field,y+1,x);
	if (x<11 && field[y][x+1]=='1')rec(field,y,x+1);
}

int main() {
	string field[12];
	while (1)
	{
		int r=0;
		for (int i=0; i<12; i++)cin >> field[i];
		for (int i=0; i<12; i++)
		{
			for (int j=0; j<12; j++)
			{
				if (field[i][j]=='1')
				{
					rec(field,i,j);
					r++;
				}
			}
		}
		if (scanf("%*c") == EOF)break;
		cout << r << endl;
	}
	return 0;
}