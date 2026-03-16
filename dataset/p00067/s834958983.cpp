#include <cstdio>

char field[12][12];

void rec(int i, int j){
	field[i][j] = '0';

	if (field[i + 1][j] == '1' && i + 1 < 12) rec(i + 1, j);
	if (field[i - 1][j] == '1' && i - 1 > -1) rec(i - 1, j);
	if (field[i][j + 1] == '1' && j + 1 < 12) rec(i, j + 1);
	if (field[i][j - 1] == '1' && j - 1 > -1) rec(i, j - 1);

}
int main(){
	int count = 0;
	
	while(1){
		bool end = false;
		for (int i = 0; i < 12; i++){
			if (scanf("%s", &field[i]) == EOF) end = true;
		}
		if (end) break;
		count = 0;
		for (int i = 0; i < 12; i++){
			for (int j = 0; j < 12; j++){
				if (field[i][j] == '1'){
					rec(i, j);
					count++;
				}
			}
		}
		printf("%d\n", count);
	}
	return 0;
}