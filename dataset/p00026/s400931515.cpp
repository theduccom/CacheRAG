#include <iostream>

using namespace std;

const int SMALL = 1;
const int MIDDLE = 2;
const int LARGE = 3;
int paper[10][10] = {0};

void Dropping_Ink(int x, int y, int size)
{
		paper[y][x]++;
		if(x-1 > -1)    paper[y][x-1]++;
		if(x+1 < 10)    paper[y][x+1]++;
		if(y-1 > -1)    paper[y-1][x]++;
		if(y+1 < 10)    paper[y+1][x]++;

		if(size >= MIDDLE)
		{
			if(x-1 > -1)
			{
				if(y-1 > -1)    paper[y-1][x-1]++;
				if(y+1 < 10)    paper[y+1][x-1]++;
			}
			if(x+1 < 10)
			{
				if(y-1 > -1)    paper[y-1][x+1]++;
				if(y+1 < 10)    paper[y+1][x+1]++;
			}
		}

		if(size == LARGE)
		{
			if(x-2 > -1)    paper[y][x-2]++;
			if(x+2 < 10)    paper[y][x+2]++;
			if(y-2 > -1)    paper[y-2][x]++;
			if(y+2 < 10)    paper[y+2][x]++;
		}
}

int main()
{
	int x, y, size, white, color;
	char c[2];

	while(cin >> x >> c[0] >> y >> c[1] >> size)
	{
		if(cin.eof())    break;

		Dropping_Ink(x, y, size);	
	}

	white = 0;
	color = 0;	
	
	for(int i=0; i<10; i++)
	{
		for(int j=0; j<10; j++)
		{
			if(paper[i][j] == 0)    white++;
			if(paper[i][j] > color)    color = paper[i][j];
		}
	}

	cout << white << endl << color << endl;
	
	return 0;
}