#include <iostream>
#include <cstdio>
using namespace std;
int N, M, A, B, C, D, x1, x2, y1, y2;
int K[32][32];

int mini(int s,int t){
  if(s>t){
    return t;
  }
  return s;
}

int main(){
  for (int i = 0; i < 32; ++i)
  {
    for (int j = 0; j < 32; ++j)
    {
      K[i][j]=100100100;
    }
  }

  scanf("%d%d", &N, &M);
  for (int i=0; i<M;++i){
    scanf("%d,%d,%d,%d", &A, &B, &C, &D);
    K[A][B]=C;
    K[B][A]=D;
    // cerr << "read " <<A<<" " << B << " " << C <<" "<< D <<endl;
  }
  for (int i = 1; i < N+1 ; ++i)
  {
    for (int j = 0; j < N+1; ++j)
    {
      for(int k=0;k<N+1;++k)
      {
        K[j][k]=mini(K[j][i]+K[i][k],K[j][k]);
      }
    }
  }
  scanf("%d,%d,%d,%d", &x1, &x2, &y1, &y2);
  // cout << K[x1][x2];
  cout << y1-y2-K[x1][x2]-K[x2][x1] << endl;

}