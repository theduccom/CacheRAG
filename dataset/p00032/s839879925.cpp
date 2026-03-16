#include <stdio.h>
 
int main(void)
{
    int hen1, hen2, taikaku;
    int tyouhoukei, hishigata; 
     
    tyouhoukei = 0;
    hishigata = 0;
     
    while(scanf("%d, %d, %d" , &hen1, &hen2, &taikaku) != EOF){
         
        if ((hen1 * hen1) + (hen2 * hen2) == (taikaku * taikaku)){
            tyouhoukei++;
        }
         
        else if (hen1 == hen2){
            hishigata++;
        }
    }
     
    printf("%d\n" , tyouhoukei);
    printf("%d\n" , hishigata);
     
    return (0);
}