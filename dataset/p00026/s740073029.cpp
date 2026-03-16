#include <cstdio>

using namespace std;

int main(){
	
	int yx[14][14]={0};
	int x,y,s;
	int count=0;
	int max=0;
	
	while (scanf("%d,%d,%d",&x,&y,&s)!=EOF) {
		x+=2;
		y+=2;
		if (s==1) {
			for (int i=0; i<3; i++) {
				yx[y+i-1][x]++;
				yx[y][x+i-1]++;
			}
			yx[y][x]--;
		}
		else if(s==2){
			for (int i=0; i<3; i++) {
				for(int j=0;j<3;j++){
					yx[y+i-1][x+j-1]++;
				}
			}
		}
		else {
			for (int i=0; i<3; i++) {
				for(int j=0;j<3;j++){
					yx[y+i-1][x+j-1]++;
				}
			}
			yx[y][x-2]++;
			yx[y][x+2]++;
			yx[y-2][x]++;
			yx[y+2][x]++;
			
		}
	}
	
	for (int i=2; i<12; i++) {
		for (int j=2; j<12; j++) {
			if(yx[i][j]==0)count++;
			if (yx[i][j]>max) {
				max=yx[i][j];
			}
		}
	}
	printf("%d\n%d\n",count,max);
	
	return 0;
}
 