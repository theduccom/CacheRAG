#include <stdio.h>
#include <stdbool.h>

char grading(int x, int y, int z)
{    
    int sum2 = x + y;
    int sum3 = x + y + z;
    char rank;
    if(x == 100 || y == 100 || z == 100){
        rank = 'A';
    } else if (sum2 >= 180){
        rank = 'A';
    } else if (sum3 >= 240){
        rank = 'A';        
    } else if (sum3 >= 210){
        rank = 'B';        
    } else if (sum3 >= 150 && (x >= 80 || y >= 80)){
        rank = 'B';        
    } else {
        rank = 'C'; 
    }  
    return rank;     
}
    

int main(void)
{   
    int rep, ma, en, ja;
    char rank;
    while(true){
        scanf("%d", &rep);
        if(rep == 0){
            break;
        }
        for(int i = 0; i < rep; ++i){
            scanf ("%d%d%d", &ma, &en, &ja);
            rank = grading(ma, en, ja);
            printf("%c\n", rank);
        }
    }
    return 0;        
}