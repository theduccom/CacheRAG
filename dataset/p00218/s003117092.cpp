#include <stdio.h>
#include <stdbool.h>

int main(void)
{   
    int n, x, y, z;
    while(true){
        scanf("%d", &n);
        if(n == 0){
            break;
        }
        for(int i = 0; i < n; ++i){
            scanf ("%d%d%d", &x, &y, &z);
            int sum2 = x + y;
            int sum3 = x + y + z;
            if(x == 100 || y == 100 || z == 100){
                printf("A\n");
            }else if(sum2 >= 180){
                printf("A\n");
            }else if(sum3 >= 240){
                printf("A\n");
            }else if(sum3 >= 210){
                printf("B\n");
            }else if(sum3 >= 150 && (x >= 80 || y >= 80)){
                printf("B\n");
            }else{
                printf("C\n");
            }
        }
    }
    return 0;        
}