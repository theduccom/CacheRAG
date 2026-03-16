#include<iostream>
using namespace std;

#define W 8
#define H 8

int main()
{
	int map[W][H] = {0};
	char a;
	int i, j;
	int flag;
	char form;

	while (1) {
		for (i = 0; i < W; i++)
			for (j = 0; j < H; j++)
				map[i][j] = 0;
		i = 0;
		j = 0;

		flag = 0;
		while (j<H) {
			if (scanf("%1c", &a) == EOF) {
				flag = 1;
				break;
			}
			if (a!='0' && a!='1') continue;
			map[i++][j] = a-'0';
			if (i == W) {
				i = 0;
				j++;
			}
		}
		if (flag) break;

		flag = 0;
		for (i = 0; i < W; i++) {
			for (j = 0; j < H; j++) {
				if (map[i][j]==1) {
					if (j+2<H && map[i][j+2]==1) {
						form = 'B';
					} else if (i+2<W && map[i+2][j]==1) {
						form = 'C';
					} else if (i+2<W && j-1>=0 && map[i+2][j-1]==1) {
						form = 'G';
					} else if (i+1<W && j-1>=0 && map[i+1][j-1]==1) {
						form = 'D';
					} else if (i+1<W && j+2<H && map[i+1][j+2]==1) {
						form = 'F';
					} else if (j+1<H && map[i][j+1]==1) {
						form = 'A';
					} else {
						form = 'E';
					}
					flag = 1;
					break;
				}
			}
			if (flag) break;
		}
		cout<<form<<endl;
	}

	return 0;
}