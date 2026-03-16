#include <cstdio>

using namespace std;

char map[8][8];

void check(void);

int main()
{
	while (scanf(" %c", &map[0][0]) != EOF){
		for (int i = 1; i < 8; i++){
			scanf(" %c", &map[0][i]);
		}
		
		for (int i = 1; i < 8; i++){
			for (int j = 0; j < 8; j++){
				scanf(" %c", &map[i][j]);
			}
		}
		
		check();
	}
	
	return (0);
}

void check(void)
{
	for (int i = 0; i < 8; i++){
		for (int j = 0; j < 8; j++){
			if (map[i][j] == '1'){
				if (map[i][j + 1] == '1' && map[i + 1][j] == '1' && map[i + 1][j + 1] == '1'){
					puts("A");
				}
				else if (map[i + 1][j] == '1' && map[i + 2][j] == '1' && map[i + 3][j] == '1'){
					puts("B");
				}
				else if (map[i][j + 1] == '1' && map[i][j + 2] == '1' && map[i][j + 3] == '1'){
					puts("C");
				}
				else if (map[i + 1][j] == '1' && map[i + 1][j - 1] == '1' && map[i + 2][j - 1] == '1'){
					puts("D");
				}
				else if (map[i][j + 1] == '1' && map[i + 1][j + 1] == '1' && map[i + 1][j + 2] == '1'){
					puts("E");
				}
				else if (map[i + 1][j] == '1' && map[i + 1][j + 1] == '1' && map[i + 2][j + 1] == '1'){
					puts("F");
				}
				else if (map[i][j + 1] == '1' && map[i + 1][j] == '1' && map[i + 1][j - 1] == '1'){
					puts("G");
				}
			}
		}
	}
}