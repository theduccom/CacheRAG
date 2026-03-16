#include <cstdio>
using namespace std;

int main(void)
{
    int n;
    int p, d1, d2;
    int max_p = 0, max = 0;
    
    while (1) {
        max_p = max = 0;
        scanf("%d", &n);
        if (n == 0) break;
        
        for (int i = 0; i < n; i++){
            scanf("%d %d %d", &p, &d1, &d2);
            if (max < (d1 + d2)){
                max = d1 + d2;
                max_p = p;
            }
        }
        
        printf("%d %d\n", max_p, max);
    }
    
    return (0);
}