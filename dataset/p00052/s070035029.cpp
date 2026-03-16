#include <cstdio>

int main(void)
{
    int n, ans;
    
    while (1){
        scanf("%d", &n);
        if (n == 0) break;
        
        ans = 0;
        while (n != 0){
            n /= 5;
            ans += n;
        }
        printf("%d\n", ans);
    }
    
    return (0);
}