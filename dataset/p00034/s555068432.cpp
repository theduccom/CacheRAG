#include <cstdio>
using namespace std;

int main(void)
{
    int cost[10];
    int cost_sum;
    int v1, v2;
    int ans_place;
    
    
    while (scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d", &cost[0], &cost[1], &cost[2], &cost[3], &cost[4], &cost[5], &cost[6], &cost[7], &cost[8], &cost[9], &v1, &v2) != EOF){
        cost_sum = ans_place = 0;
        
        for (int i = 0; i < 10; i++){
            cost_sum += cost[i];
        }
        
        double tmp = (double)cost_sum / (double)(v1 + v2);
        
        cost_sum = 0;
        
        while (cost_sum < (tmp * v1)){
            cost_sum += cost[ans_place];
            ans_place++;
        }
        
        printf("%d\n", ans_place);
    }
    
    return (0);
}