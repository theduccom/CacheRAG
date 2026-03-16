#include<cstdio>

int main(){
	int p[14][14];
	int x, y, s, max = 0, sum = 100;
	for(int i = 0; i < 14; i++){
		for(int j = 0; j < 14; j++){
			p[i][j] = 0;
		}
	}

	while(scanf("%d,%d,%d", &x, &y, &s) + 1){
		if(s == 0){
			break;
		}
		p[x+2][y+2]++;
		p[x+1][y+2]++;
		p[x+2][y+1]++;
		p[x+3][y+2]++;
		p[x+2][y+3]++;
		s--;
		if(s){
			p[x+1][y+1]++;
			p[x+1][y+3]++;
			p[x+3][y+1]++;
			p[x+3][y+3]++;
			s--;
			if(s){
				p[x][y+2]++;
				p[x+2][y]++;
				p[x+2][y+4]++;
				p[x+4][y+2]++;
			}
		}
	}

	for(int i = 2; i < 12; i++){
		for(int j = 2; j < 12; j++){
			if(p[i][j]){
				sum--;
				if(max < p[i][j]){
					max = p[i][j];
				}
			}
		}
	}

	printf("%d\n%d\n", sum, max);
	return 0;
}