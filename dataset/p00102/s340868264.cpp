#include <cstdio>

int main(void)
{
    int data[11][11];
    int n;
    
    while (1){
        scanf("%d", &n);
        if (n == 0) break;
        
        for (int i = 0; i <= n; i++){
            for (int j = 0; j <= n; j++){
                data[i][j] = 0;
            }
        }
        
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                scanf("%d", &data[i][j]);
                data[i][n] += data[i][j];
                data[n][j] += data[i][j];
                data[n][n] += data[i][j];
            }
        }
        
        for (int i = 0; i <= n; i++){
            for (int j = 0; j <= n; j++){
                printf("%5d", data[i][j]);
            }
            printf("\n");
        }
        
    }
    
    return (0);
}