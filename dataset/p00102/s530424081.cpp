#include <iostream>
using namespace std;

int main(){
    int n;

    while(cin >> n, n != 0){
        int matrix[n+1][n+1];
        int rowsum, colsum;
        int allsum = 0;

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin >> matrix[i][j];
            }
        }

        for(int i=0; i<n; i++){
            rowsum = 0;
            for(int j=0; j<n; j++){
                printf("%5d", matrix[i][j]);
                rowsum += matrix[i][j];
            }
            printf("%5d\n", rowsum);
        }

        for(int i=0; i<n; i++){
            colsum = 0;
            for(int j=0; j<n; j++){
                colsum += matrix[j][i];
            }
            allsum += colsum;
            printf("%5d", colsum);
        }
        printf("%5d\n", allsum);
    }

    return 0;
}