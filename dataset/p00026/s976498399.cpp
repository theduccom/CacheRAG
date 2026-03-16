#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;

#define REP(i,a,n) for(int i=(a); i<(int)(n); i++)
#define rep(i,n) REP(i,0,n)

long long paper[10][10];
const int dx[] = {0,0,1,-1};
const int dy[] = {1,-1,0,0};
const int diax[] = {1,1,-1,-1};
const int diay[] = {-1,1,1,-1};


void filldd(int x, int y){
	rep(k,4){
		int tx = x+dx[k] , ty = y+dy[k];
		if( tx<0 || ty<0 || tx>=10 || ty>=10 )continue;
		paper[ty][tx]++;
	}
}
void filldia(int x, int y){
	rep(k,4){
		int tx = x+diax[k] , ty = y+diay[k];
		if( tx<0 || ty<0 || tx>=10 || ty>=10 )continue;
		paper[ty][tx]++;
	}
}

void dai(int x, int y){
	REP(z,1,3)rep(k,4){
		int tx = x+dx[k]*z , ty = y+dy[k]*z;
		if( tx<0 || ty<0 || tx>=10 || ty>=10 )continue;
		paper[ty][tx]++;
	}
	filldia(x,y);
}
void chuu(int x, int y){
	filldd(x,y);
	filldia(x,y);
}

int main(){
	int x,y,sz;
	memset(paper,0,sizeof(paper));
	while(~scanf("%d,%d,%d",&x,&y,&sz)){
		paper[y][x]++;
		if( sz==3 )      dai(x,y);
		else if( sz==2 ) chuu(x,y);
		else             filldd(x,y);
	}
	long long nasi = 0, ari = 0;
	rep(i,10)rep(j,10){
		if( paper[i][j]==0 )nasi++;
		else{
			ari = max(ari,paper[i][j]);
		}
	}
	printf("%lld\n%lld\n",nasi,ari);
	return 0;
}