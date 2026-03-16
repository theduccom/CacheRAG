#include<cstdio>

using namespace std;

char field[9][9];

void bomb(int px,int py)
{
	field[py][px]='0';
	for(int x=-3;x<=3;x++)if(1<=px+x&&px+x<=8&&field[py][px+x]=='1')bomb(px+x,py);
	for(int y=-3;y<=3;y++)if(1<=py+y&&py+y<=8&&field[py+y][px]=='1')bomb(px,py+y);
}

int main()
{
	int n;	scanf("%d ",&n);

	for(int k=1;k<=n;k++){
		for(int i=1;i<=8;i++){
			for(int j=1;j<=8;j++){
				field[i][j]=getchar();
			}
			getchar();
		}
		int sx,sy;
		scanf("%d%d ",&sx,&sy);

		bomb(sx,sy);

		printf("Data %d:\n",k);
		for(int i=1;i<=8;i++){
			for(int j=1;j<=8;j++){
				putchar(field[i][j]);
			}
			putchar('\n');
		}
	}

	return 0;
}