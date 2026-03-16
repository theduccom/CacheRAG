#include <stdio.h>

int main(void)
{
    int number, pm, pe, pj, temp;
    while(1){
        scanf("%d", &number);
        if (number == 0){
            break;
        }
        for (int i = number; i > 0; i--){
            scanf("%d %d %d", &pm, &pe, &pj);
            if (pm == 100|| pe == 100|| pj == 100|| (pe + pm)/2 >= 90||(pe + pm + pj)/3 >= 80 ){
                printf("A\n");
            }else if((pe + pm + pj)/3 >= 70||((pe + pm + pj)/3 >= 50 && (pe >= 80|| pm >= 80))) {
                printf("B\n");
            }else{
                printf("C\n");
            }
        }
    }
    return 0;
}
        
    