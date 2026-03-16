#include<iostream>
#include<cstdio>

char data[8][8];
int px, py;

int main(){
	while (true){
		for(int i = 0; i < 8 ; i++){
			for(int j = 0; j < 8; j++){
				if(!(std::cin >> data[i][j]))goto end;
				if(data[i][j] == '1')px = j, py = i;
			}
		}

		if (data[py][px - 1] == '1' && data[py - 1][px] == '1' && data[py - 1][px - 1] == '1')printf("A\n");
		else if (data[py - 1][px] == '1' && data[py - 2][px] == '1' && data[py - 3][px] == '1')printf("B\n");
		else if (data[py][px - 1] == '1' && data[py][px - 2] == '1' && data[py][px - 3] == '1')printf("C\n");
		else if (data[py - 1][px] == '1' && data[py - 1][px + 1] == '1' && data[py - 2][px + 1] == '1')printf("D\n");
		else if (data[py][px - 1] == '1' && data[py - 1][px - 1] == '1' && data[py - 1][px - 2] == '1')printf("E\n");
		else if (data[py - 1][px] == '1' && data[py - 1][px - 1] == '1' && data[py - 2][px - 1] == '1')printf("F\n");
		else if (data[py - 1][px] == '1' && data[py - 1][px + 1] == '1' && data[py][px - 1] == '1')printf("G\n");
	}
	end:;
	return 0;
}