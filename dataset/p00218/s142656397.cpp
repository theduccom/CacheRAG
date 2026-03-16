#include <cstdio>
using namespace std;

int main(void)
{
    int n;
    int m, e, j;
    
    while (1){
        scanf("%d", &n);
        if (n == 0) break;
        
        for (int i = 0; i < n; i++){
            scanf("%d %d %d", &m, &e, &j);
            if ((m == 100) || (e == 100) || (j == 100)){
                printf("A\n");
            }
            else if (90 <= ((m + e) / 2.0)){
                printf("A\n");
            }
            else if (80 <= ((m + e + j) / 3.0)){
                printf("A\n");
            }
            else if (70 <= ((m + e + j) / 3.0)){
                printf("B\n");
            }
            else if ((50 <= ((m + e + j) / 3.0)) && ((80 <= m) || (80 <= e))){
                printf("B\n");
            }
            else {
                printf("C\n");
            }
        }
    }
    
    return (0);
}