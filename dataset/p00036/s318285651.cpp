#include <bits/stdc++.h>

using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,a) FOR(i,0,a)

char S[8][9];

bool check(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4){
	if (S[y1][x1]=='1' && S[y2][x2]=='1' &&S[y3][x3]=='1' &&S[y4][x4]=='1'){
		return true;
	}
	return false;
}

int main(){
	while (scanf("%s",S[0])!=EOF){
		FOR(i,1,8){
			scanf("%s",S[i]);
		}
		REP(i,7){
			REP(j,7){
				if (check(i,j,i+1,j,i,j+1,i+1,j+1)){
					printf("A\n");
				}
			}
		}
		REP(i,8){
			REP(j,5){
				if (check(i,j,i,j+1,i,j+2,i,j+3)) printf("B\n");
			}
		}
		REP(i,5) REP(j,8) if (check(i,j,i+1,j,i+2,j,i+3,j)) printf("C\n");
		REP(i,7) REP(j,6) if (check(i+1,j,i,j+1,i+1,j+1,i,j+2)) printf("D\n");
		REP(i,6) REP(j,7) if (check(i,j,i+1,j,i+1,j+1,i+2,j+1)) printf("E\n");
		REP(i,7) REP(j,6) if (check(i,j,i,j+1,i+1,j+1,i+1,j+2)) printf("F\n");
		REP(i,6) REP(j,7) if (check(i+1,j,i+2,j,i,j+1,i+1,j+1)) printf("G\n");
	}
	return 0;
}