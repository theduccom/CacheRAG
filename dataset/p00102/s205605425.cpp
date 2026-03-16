#include<iostream>
#include<cstdio>
using namespace std;

int main(){

  int tab[11][11], n, low[11], colume[11], sum;

  while(cin >> n){
    if(n == 0) break;
    fill(low, low+11, 0);
    fill(colume, colume+11, 0);
    
    for(int i=0; i<=n; i++){
      sum = 0;
      if(i != n){
        for(int j=0; j<n; j++){
          cin >> tab[i][j];
          sum += tab[i][j];
          low[j] += tab[i][j];
        }
      }
      else{
        for(int j=0; j<n; j++){
          tab[i][j] = low[j];
          sum += low[j];
        }
      }

      tab[i][n] = sum;

    }
    
    for(int i=0; i<=n; i++){
      for(int j=0; j<=n; j++){
        printf("%5d", tab[i][j]);
      }
      cout << endl;
    }
    
  }

  return 0;

}