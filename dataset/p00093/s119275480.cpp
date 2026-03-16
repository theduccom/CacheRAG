#include <stdio.h>

int main(void)
{
    int a, b, y, counter, datacount;
    datacount = 0;
    while(1){
        counter = 0;
        scanf("%d %d", &a, &b);
        datacount++;
        if (a == 0&& b == 0){
            break;
        }
        y = a;
        if (datacount != 1)
            {
                printf("\n");
            }
        for (int i = a; i <= b; i++){// y == i
            if (!(y%400)){
                printf("%d\n", y);
                counter++;
            }else if((!(y%4)) && y%100){
                printf("%d\n", y);
                counter++;
            }
            y++;
        }
        if (counter == 0){
            printf("NA\n");
        }
    }
    return 0;
}
        
    