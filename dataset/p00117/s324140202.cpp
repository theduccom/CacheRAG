#include <iostream>
#include <cstdio>
using namespace std;
int N, M, A, B, C, D, x1, x2, y1, y2;
const int inf = 1001000100;
int K[32][32]={};


int main() {
  scanf("%d%d", &N, &M);

  for (int i=1; i<N+1; i++)
    for (int j=1; j<N+1; j++)
      K[i][j] = inf;
  
  for (int i=0; i<M; ++i){
    scanf("%d,%d,%d,%d", &A, &B, &C, &D);
    //cerr << "read " << A << " " << B << " " << C << " " << D << endl;
    K[A][B] = C;
    K[B][A] = D;
  }

  scanf("%d,%d,%d,%d", &x1, &x2, &y1, &y2);
  
  for (int k=1; k<N+1; k++){
    for (int i=1; i<N+1; i++){
      for (int j=1; j<N+1; j++){
	if (K[i][j] > K[i][k] + K[k][j])
	  K[i][j] = K[i][k] + K[k][j];
	//cout << K[i][j] << " ";
      }
      //cout << endl;
    }
  }

 
  cout << y1 - y2 - K[x1][x2] -K[x2][x1] << endl;
}