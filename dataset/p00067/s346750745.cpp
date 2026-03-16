//0067

#include<stdio.h>


const int N = 12;
const int P = 4;
char a[N+P][N+P];

void Sink(int x, int y)
{
	if(a[x][y] == '1')
	{
		a[x][y] = '0';
		Sink(x+1,y);
		Sink(x-1,y);
		Sink(x,y+1);
		Sink(x,y-1);
	}
}

int main(void)
{
	int i,j;
	int count = 0;
	for(;;)
	{
		count = 0;
		for(i = 0; i < N; i++)
		{
			if(!fgets(a[i+1]+1, N+2, stdin))
			{
				return 0;
			}
			if(a[i+1][1] == '\n')
				i--;
		}

		for(i = 0; i < N; i++)
		{
			for(j = 0; j < N; j++)
			{
				if(a[i+1][j+1] == '1')
				{
					Sink(i+1, j+1);
					count++;
				}
			}
		}
		printf("%d\n", count);
	}
	return 1;
}


/*
101111111101
001111111100
111111111111
111111111111
111111111111
111111111111
111111111111
111111111111
111111111111
111111111111
001111111100
101111111101


*/