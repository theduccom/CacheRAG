#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int N,M,A,B,C,D,x1,x2,y1,y2;
int K[32][32];
const int inf = 1001001001;

void show(int K[32][32], int N){
  for(int r=1;r<M+1;r++){
    for(int c=1; c<M+1;c++){
      cout << K[r][c] << " ";
    }
    cout << endl;
  }
}

void init_k(int K[32][32]){
  fill(&K[0][0], &K[0][0]+32*32,inf); //Kツづ個渉可甘コツ可サ
}

void senni_k(int K[32][32]){
  K[A][B] = C;
  K[B][A] = D;
}

void Floyd_Warshall(int K[32][32]){
  int i, j, k;
  for(k=1; k<M+1; k++){
    for(i=1; i<M+1; i++){
      for(j=1; j<M+1; j++){
	if(K[i][j] > K[i][k] + K[k][j]){
	  K[i][j] = K[i][k] + K[k][j];
	}
      }
    }
  }
}


int main(){
  int Reward;
  init_k(K);
  scanf("%d %d", &M, &N);
  for(int i=0; i<N; i++){
    scanf("%d,%d,%d,%d", &A, &B, &C, &D);
    senni_k(K);
    //cerr << "read" << A << ' ' << B << ' ' << C << ' ' << D << endl;
  }
  //show(K, M);
  Floyd_Warshall(K);
  //show(K, M);
  scanf("%d,%d,%d,%d", &x1, &x2, &y1, &y2);
  
  Reward = y1 - y2- K[x1][x2] - K[x2][x1];
  cout << Reward << endl;
}