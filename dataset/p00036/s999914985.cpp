#include <cstdio>

using namespace std;

char fig [9][9];

int main()
{
	
	while (scanf("%s", fig[0]) != EOF){
		for (int i = 1; i < 8; i++){
			scanf("%s", fig[i]);
		}
		
		for (int y = 0; y < 8; y++){
			for (int x = 0; x < 8; x++){
				if (fig[y][x] != '0'){
					if (fig[y][x + 1] == '1' && fig[y + 1][x] == '1' && fig[y + 1][x + 1] == '1'){
						printf("A\n");
						y = 10;
						break;
					}
					else if(fig[y + 1][x] == '1' && fig[y + 2][x] == '1' && fig[y + 3][x] == '1'){
						printf("B\n");
						y = 10;
						break;
					}
					else if(fig[y][x + 1] == '1' && fig[y][x + 2] == '1' && fig[y][x + 3] == '1'){
						printf("C\n");
						y = 10;
						break;
					}
					else if(fig[y + 1][x] == '1' && fig[y + 1][x - 1] == '1' && fig[y + 2][x - 1] == '1'){
						printf("D\n");
						y = 10;
						break;
					}
					else if(fig[y][x + 1] == '1' && fig[y + 1][x + 1] == '1' && fig[y + 1][x + 2] == '1'){
						printf("E\n");
						y = 10;
						break;
					}
					else if(fig[y + 1][x] == '1' && fig[y + 1][x + 1] == '1' && fig[y + 2][x + 1] == '1'){
						printf("F\n");
						y = 10;
						break;
					}
					else if(fig[y][x + 1] == '1' && fig[y + 1][x] == '1' && fig[y + 1][x - 1] == '1'){
						printf("G\n");
						y = 10;
						break;
					}
				}
			}
		}
	}
}