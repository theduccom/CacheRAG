#include<iostream>
#include<cstdio>
#define PAPER_C 10
#define PAPER_R 10
using namespace std;
void drop(int p[PAPER_C][PAPER_R], int x,int y){
	if(0<=x && x<PAPER_R && 0<=y && y<PAPER_C){
		p[y][x]++;
	}
	return;
}
int main(){
	int paper[PAPER_C][PAPER_R] = {0};
	int i, j, x, y, size, cnt, max;
	max = 0;
	cnt = PAPER_C * PAPER_R;
	while(scanf("%d,%d,%d", &x, &y, &size) != EOF){
		if(size == 1){
			drop(paper, x, y);
			drop(paper, x-1, y);
			drop(paper, x+1, y);
			drop(paper, x, y-1);
			drop(paper, x, y+1);
		}else if(size == 2){
			for(i=-1;i<2;i++){
				for(j=-1;j<2;j++){
					drop(paper, x+j, y+i);
				}
			}
		}else if(size == 3){
			for(i=-1;i<2;i++){
				for(j=-1;j<2;j++){
					drop(paper, x+j, y+i);
				}
			}
			drop(paper, x-2, y);
			drop(paper, x+2, y);
			drop(paper, x, y-2);
			drop(paper, x, y+2);
		}
	}
	for(i=0;i<PAPER_C;i++){
		for(j=0;j<PAPER_R;j++){
			if(paper[i][j] != 0){
				cnt--;
				if(paper[i][j] > max){
					max = paper[i][j];
				}
			}
		}
	}
	cout << cnt << endl;
	cout << max << endl;
	return 0;
}