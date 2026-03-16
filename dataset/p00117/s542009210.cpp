#include <iostream>
#include <cstdio>
using namespace std;
int N,M,A,B,C,D,x1,x2,y1,y2;
int K[32][32];
const int inf =1001001111;

int main() {
for(int j=0;j<32;j++){
	for(int jj=0;jj<32;jj++){
		K[j][jj]=inf;
	}
}
	
scanf("%d%d",&N,&M);
for(int ii=0;ii<M;ii++){
	scanf("%d,%d,%d,%d",&A,&B,&C,&D);
	K[A][B]=C;
	K[B][A]=D;
}
for(int k=1;k<=N;k++){
for(int i=1;i<=N;i++){
	for(int j=1;j<=N;j++){
		if(K[i][j]>K[i][k]+K[k][j]){
			K[i][j]=K[i][k]+K[k][j];
		}
	}
}	
}

scanf("%d,%d,%d,%d",&x1,&x2,&y1,&y2);
int a;
a=y1-y2-K[x1][x2]-K[x2][x1];

printf("%d\n", a);


	return 0;
}