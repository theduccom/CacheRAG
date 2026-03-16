#include <stdio.h>
 
int uruu(int i)
{
    if (i % 400 == 0) {
        return 1;
    } else if (i % 100 == 0) {
        return 0;
    } else if (i % 4 == 0) {
        return 1;
    } else {
        return 0;
    }
}
 
int main(void)
{
    int first, end;
    int count = 0;
    int dataset = 0;
    while(1) {
        scanf("%d %d", &first, &end);
        if (first == 0 && end == 0) {
            break;
        }
        if (dataset > 0) {
            printf("\n");
        }
        for (int i = first; i < end + 1; i++) {
            if (uruu(i) == 1){
                printf("%d\n", i);
                count++;
            }
        }
        if (count == 0) {
            printf("NA\n");
        }
        dataset = dataset++;        
        count = 0;
    }
    return 0;
}