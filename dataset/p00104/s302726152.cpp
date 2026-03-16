#include <cstdio>

using namespace std;

int main()
{
	int h, w;
	char str[100][100];
	
	while (scanf("%d %d", &h, &w), !(h == 0 && w == 0)){
		bool flag = true;
		
		for (int i = 0; i < h; i++){
			scanf("%s", str[i]);
		}
		int x = 0, y = 0;
		while (str[y][x] != '.'){
			
			if (str[y][x] == 'l'){
				flag = false;
				break;
			}
			if (str[y][x] == '>'){
				str[y][x] = 'l';
				x++;
			}
			else if (str[y][x] == '<'){
				str[y][x] = 'l';
				x--;
			}
			else if (str[y][x] == '^'){
				str[y][x] = 'l';
				y--;
			}
			else if (str[y][x] == 'v'){
				str[y][x] = 'l';
				y++;
			}
		}
		if (flag){
			printf("%d %d\n", x, y);
		}
		else {
			printf("LOOP\n");
		}
	}
}