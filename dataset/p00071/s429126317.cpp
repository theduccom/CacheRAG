//0071

#include<stdio.h>
#include<algorithm>
using namespace std;

const int N = 8;
char board[N][N+2];

void Fire(int i, int j)
{
	if(board[i][j] != '1')
		return;
	board[i][j] = '0';
	int d;
	for(d = max(j-3, 0); d < min(j+4, N); ++d)
	{
		Fire(i, d);
	}
	for(d = max(i-3, 0); d < min(i+4, N); ++d)
	{
		Fire(d, j);
	}
}

int main(void)
{
	int n;
	scanf("%d", &n);
	int i;
	for(int caseNum = 1; caseNum <= n; ++caseNum)
	{
		for(i = 0; i < N; ++i)
		{
			scanf("%s", board[i]);
			if(board[i][0] == '\0')
				--i;
		}
		int x, y;
		scanf("%d %d", &x, &y);
		Fire(y-1, x-1);

		printf("Data %d:\n", caseNum);
		for(i = 0; i < N; ++i)
		{
			puts(board[i]);
		}
	}
	return 0;
}