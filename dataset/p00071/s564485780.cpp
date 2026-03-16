#include <stdio.h>

char a[9][9];
int dx[] = {0,  0, 0,  0, 0,  0, 1, -1, 2, -2, 3, -3};
int dy[] = {3, -3, 2, -2, 1, -1, 0,  0, 0,  0, 0,  0};

void bomb(int i, int j)
{
	int newx, newy;
	int k;
	
	if (a[i][j] == '1'){
		a[i][j] = '0';
		for (k = 0; k < 12; k++){
			newx = i + dx[k];
			newy = j + dy[k];
			
			if (newx >= 0 && newy >= 0 && newx < 8 && newy < 8 && a[newx][newy] == '1'){
				bomb(newx, newy);
			}
		}
	}
}

int main(void)
{
	int i, j;
	int n;
	int x, y;
	int count;
	
	count = 1;
	scanf("%d", &n);
	while (n){
		for (i = 0; i < 8; i++){
			scanf("%s", a[i]);
		}
		scanf("%d", &x);
		scanf("%d", &y);
		
		bomb(y - 1, x - 1);
		
		printf("Data %d:\n", count);
		for (i = 0; i < 8; i++){
			printf("%s\n", a[i]);
		}
		n--;
		count++;
	}
	
	return (0);
}