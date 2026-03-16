#include <bits/stdc++.h>

using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,a) FOR(i,0,a)

int f[10][10];

int dx[4]={1,0,-1,0},dy[4]={0,1,0,-1};

int main(){
	int x,y,size;
	while (scanf("%d,%d,%d",&x,&y,&size)!=-1){
		int x2,y2;
		switch (size){
			case 1:
				f[y][x]++;
				REP(i,4){
					x2=x+dx[i];
					y2=y+dy[i];
					if (x2>=0 && x2<10 && y2>=0 && y2<10){
						f[y2][x2]++;
					}
				}
				break;
			case 2:
				FOR(i,-1,2){
					FOR(j,-1,2){
						x2=x+i;
						y2=y+j;
						if (x2>=0 && x2<10 && y2>=0 && y2<10){
							f[y2][x2]++;
						}
					}
				}
				break;
			case 3:
				FOR(i,-1,2){
					FOR(j,-1,2){
						x2=x+i;
						y2=y+j;
						if (x2>=0 && x2<10 && y2>=0 && y2<10){
							f[y2][x2]++;
						}
					}
				}
				REP(i,4){
					x2=x+dx[i]*2;
					y2=y+dy[i]*2;
					if (x2>=0 && x2<10 && y2>=0 && y2<10){
						f[y2][x2]++;
					}
				}
				break;
		}
	}
	int e=0;
	int m=0;
	REP(i,10){
		REP(j,10){
			m=max(m,f[i][j]);
		}
	}
	REP(i,10){
		REP(j,10){
			if (f[i][j]==0){
				e++;
			}
		}
	}
	printf("%d\n%d\n",e,m);
	return 0;
}