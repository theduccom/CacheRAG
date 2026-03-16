#include <cstdio>

int main(void)
{
    int a, b;
    bool flag, first = false;
    
    while (1){
        scanf("%d %d", &a, &b);
        if (a == 0 && b == 0) break;
        
        if (first) printf("\n");
        else first = true;
        
        flag = false;
        
        while (a <= b){
            if (a % 4 == 0 && (a % 100 != 0 || a % 400 == 0)){
                printf("%d\n", a);
                flag = true;
            }
            a++;
        }
        if (!flag) printf("NA\n");
    }
    
    return (0);
}