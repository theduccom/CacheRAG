#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    int n;
    int matr[11][11];
    while(cin >> n,n){
        matr[n][n]=0;
        for(int i=0;i<n;i++){
            matr[i][n]=0;
            for(int j=0;j<n;j++){
                if(i==0)matr[n][j]=0;
                cin >> matr[i][j];
                matr[i][n]+=matr[i][j];
                matr[n][j]+=matr[i][j];
                matr[n][n]+=matr[i][j];
            }
        }
        for(int i=0;i<=n;i++){
            for(int j=0;j<=n;j++){
                printf("%5d",matr[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}