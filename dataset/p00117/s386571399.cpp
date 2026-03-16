#include <iostream>
#include <cstdio>
#define size 32
using namespace std;
int N,M,A,B,C,D,x1,x2,y1,y2;
int cost;
int K[size][size];
const int inf = 1001001001;

int main(){
	for(int i=1; i<size ; i++){
		for(int j=1 ; j<size ; j++){
			K[i][j]=inf;
		}
	}// 行列初期化

	scanf("%d %d",&N,&M);
	for(int i=0; i< M ;++i){
	scanf("%d,%d,%d,%d",&A,&B,&C,&D);
	K[A][B]=C;
	K[B][A]=D;
	}//初期化完了


	for(int k=1 ; k<N+1 ; k++){
		for(int i=1 ; i<N+1; i++){
			for(int j=1 ; j<N+1; j++){
				if(K[i][j] > K[i][k] + K[k][j]){
					K[i][j] = K[i][k]+K[k][j];
				}
			}
		}
	}//i-j間最短路のコスト計算

	scanf("%d,%d,%d,%d",&x1,&x2,&y1,&y2);
	cost= y1-y2-K[x1][x2]-K[x2][x1];
	cout << cost << endl;
}