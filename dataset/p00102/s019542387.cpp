#include<iostream>
#include<cstdio>
using namespace std;
int main(){
  int n;
  while(cin >>n,n){
    int mat[11][11] = {0};
    for(int i=0; i<n; i++){
      for(int j=0; j<n; j++){
	cin >>mat[i][j];
      }
    }
    int k = 0;
    for(int i=0; i<n; i++){
      int s = 0, m = 0;
      for(int j=0; j<n; j++){
	s+=mat[i][j];
	m+=mat[j][i];
      }
      mat[i][n] = s;
      mat[n][i] = m;
      k+=s;
    }
    mat[n][n] = k;
    for(int i=0; i<=n; i++){
      for(int j=0; j<=n; j++){
	printf("%5d",mat[i][j]);
      }
      cout <<endl;
    }
  }
  return 0;
}