#include <iostream>
#include <cstdio>
using namespace std;
int N,M,A,B,C,D,x1,x2,y1,y2;
int P[32][32];
const int inf = 1001001001;
int main() {
	for(int e=0;e<32;++e){
		for(int f=0;f<32;++f){
			P[e][f]=inf;
		}
	}
	scanf("%d%d", &N, &M);
	for(int g=0;g<M;++g){
		scanf("%d,%d,%d,%d", &A, &B, &C, &D);
		P[A][B]=C;
		P[B][A]=D;
	}
	for(int k=1;k<=N;++k){
		for(int i=1;i<=N;++i){
			for(int j=1;j<=N;++j){
				if(P[i][j]>P[i][k]+P[k][j]){
					P[i][j] = P[i][k] + P[k][j];
				}
			}
		}
	}
	
	scanf("%d,%d,%d,%d",&x1,&x2,&y1,&y2);
	
	int X;
	X=y1-P[x1][x2]-P[x2][x1]-y2;
	printf("%d\n", X);
	return 0;
}