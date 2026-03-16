#include <cstdio>
using namespace std;

char map[8][9];

int main(void)
{
    int x, y;
    
    while (scanf("%s", map[0]) != EOF){
        if (!(map[0][0] == '0' || map[0][0] == '1')){
            continue;
        }
        
        for (int i = 1; i < 8; i++){
            scanf("%s", map[i]);
        }
        
        for (int i = 0; i < 64; i++){
			if(map[i / 8][i % 8] == '1'){
				x = i % 8;
				y = i / 8;
				break;
			}
		}
		if((map[y + 1][x] == '1') && (map[y][x + 1] == '1') && (map[y + 1][x + 1] == '1'))
        {
			printf("A\n");
		}
        else if((map[y + 1][x] == '1') && (map[y + 2][x] == '1') && (map[y + 3][x] == '1'))
        {
			printf("B\n");
		}
        else if((map[y][x + 1] == '1') && (map[y][x + 2] == '1') && (map[y][x + 3] == '1'))
        {
			printf("C\n");
		}
        else if((map[y][x + 1] == '1') && (map[y + 1][x + 1] == '1') && (map[y + 1][x + 2] == '1'))
        {
			printf("E\n");
		}
        else if((map[y + 1][x] == '1') && (map[y + 1][x + 1] == '1') && (map[y + 2][x + 1] == '1'))
        {
			printf("F\n");
		}
        else if((map[y][x + 1] == '1') && (map[y + 1][x] == '1') && (map[y + 1][x - 1] == '1'))
        {
			printf("G\n");
		}
        else if((map[y + 2][x - 1] == '1') && (map[y + 1][x] == '1') && (map[y + 1][x - 1] == '1'))
        {
			printf("D\n");
		}
        
    }
    
    return (0);
}