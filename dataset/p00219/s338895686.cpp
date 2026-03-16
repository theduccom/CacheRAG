#include <cstdio>

int main(void)
{
    int n;
    int ice[10];
    
    int tmp;
    while (scanf("%d", &n)){
        for (int i = 0; i < 10; i++){
            ice[i] = 0;
        }
        if (n == 0) break;
        for (int i = 0; i < n; i++){
            scanf("%d", &tmp);
            ice[tmp]++;
        }
        
        for (int i = 0; i < 10; i++){
            if (0 < ice[i]){
                while (ice[i] != 0){
                    printf("*");
                    ice[i]--;
                }
            }
            else {
                printf("-");
            }
            printf("\n");
        }
    }
    
    return (0);
}