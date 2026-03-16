#include <cstdio>

int main(void) {
	int x,y,s;
	int map[10][10],w=0,m=0,t=0;
	int i,j;

	for(i=0;i<10;i++) { for(j=0;j<10;j++) { map[j][i] = 0; } }
	while(scanf("%d,%d,%d",&x,&y,&s)!=EOF) {
		switch(s) {
			case 3:
				if(x-2>=0) { map[x-2][y]++; }
				if(x+2<10) { map[x+2][y]++; }
				if(y-2>=0) { map[x][y-2]++; }
				if(y+2<10) { map[x][y+2]++; }
			case 2:
				if(x-1>=0) {
					if(y-1>=0) { map[x-1][y-1]++; }
					if(y+1<10) { map[x-1][y+1]++; }
				}
				if(x+1<10) {
					if(y-1>=0) { map[x+1][y-1]++; }
					if(y+1<10) { map[x+1][y+1]++; }
				}
			case 1:
				if(x-1>=0) { map[x-1][y]++; }
				if(x+1<10) { map[x+1][y]++; }
				if(y-1>=0) { map[x][y-1]++; }
				if(y+1<10) { map[x][y+1]++; }
			default:
				map[x][y]++;
				break;
		}
	}
	for(i=0;i<10;i++) {
		for(j=0;j<10;j++) {
			if(map[j][i]==0) { w++; }
			if(map[j][i]==m) { t++; }
			else if(map[j][i]>m) { m=map[j][i];t=0; }
			//printf("%d ", map[j][i]);
		}
		//printf("\n");
	}
	printf("%d\n%d\n", w, m);
	return 0;
}