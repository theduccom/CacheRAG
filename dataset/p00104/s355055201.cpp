#include<stdio.h>
int main()
{
	char a[100][101];
	int h,w,i,j;
	while(scanf("%d%d",&h,&w), h)
	{
		for(i = 0; i < h; ++i)
			scanf("%s", a[i]);
		i = j = 0;
		bool isPlaced[100][100] = {false};
		while(a[i][j] != '.')
		{
			if(isPlaced[i][j])
			{
				printf("LOOP\n");
				goto NEXT;
			}
			isPlaced[i][j] = true;
			switch(a[i][j])
			{
			case '>': ++j; break;
			case '<': --j; break;
			case '^': --i; break;
			case 'v': ++i; break;
			}
		}
		printf("%d %d\n", j, i);
NEXT:
		;
	}
	return 0;
}