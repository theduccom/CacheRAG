#include <cstdio>
using namespace std;

int main(void)
{
    int w;
    
    while (1){
        int money = 0;
        
        scanf("%d", &w);
        if (w == -1) break;
        
        while (1){
            if (30 < w){
                money += 160;
            }
            else if (20 < w){
                money += 140;
            }
            else if (10 < w){
                money += 125;
            }
            else if (w == 0){
                money += 1150;
                break;
            }
            w--;
        }
        
        printf("%d\n", 4280 - money);
    }
    
    return (0);
}