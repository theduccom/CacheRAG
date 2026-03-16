#include <cstdio>

int main(void)
{
    double glass_v;
    double glass_y;
    double t;
    int ans;
    
    while (scanf("%lf", &glass_v) != EOF){
        t = glass_v / 9.8;
        glass_y = 4.9 * t * t;
        ans = 1;
        while ((5 * ans) - 5 < glass_y){
            ans++;
        }
        printf("%d\n", ans);
    }
    
    return (0);
}